template <typename T> 
Array<T>::Array() : _size(0)
{
	 _array = new T[_size];	
}


template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_array = new T[_size];
}

template<typename T>
Array<T>::Array(const Array<T>& copy)
{
	_size = copy.getSize();
	_array = new T[_size];
	for (unsigned int i = 0;i < _size; i++)
		_array[i] = copy.getElem(i);
	*this = copy;
}

template<typename T>
unsigned int Array<T>::getSize(void) const
{
	return _size;	
}

template<typename T>
T Array<T>::getElem(unsigned int i) const
{
	return _array[i];	
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& ref)
{
	delete [] _array;
	_size = ref.getSize();
	_array = new T[_size];
	for (unsigned int i = 0; i < _size ; i++)
		_array[i] = ref.getElem(i);
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int i) const
{
	if ( i > _size) 
		throw Array<T>::OutOfBoundsException();
	return _array[i];
}

template<typename T>
Array<T>::~Array()
{
	delete [] _array;
}
