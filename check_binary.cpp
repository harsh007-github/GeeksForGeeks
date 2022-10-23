
// Return true if str is binary, else false
bool isBinary(string str)
{
    int i;
    for(i=0;i<str.size();i++)
    {
        if(str[i]!=49 && str[i]!=48)
        {
            return false;
        }
    }
    return true;
}
