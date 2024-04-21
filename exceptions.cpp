// make out-of-range response if there is an attempt to make out-of-range access by a user, e.g., a clear, out-of-range exception 

double& Vector::operator[](int i)
{
    if(i<0 || size()<=i)
          throw out_of_range("Vector::operator[]");
    return elem[i];
}
