	public:
	int findFocalLength(float R, string type){
	    float fl;
	    if(type=="concave")
	    {
	        fl=(R/2);
	        return floor(fl);
	    }
	    else 
	    {
	        fl=-(R/2);    
	        return floor(fl);
	    }
	}
};
