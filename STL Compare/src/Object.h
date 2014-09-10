class Object
{
public:
	Object(int objId, int a, int b);

	int GetObjectId();

	int GetSum();
	int GetDiff();
	int GetProd();

private:
	int mObjectId;

	int mSum;
	int mDiff;
	int mProd;
};

inline Object::Object(int objId, int a, int b) 
	: mObjectId(objId)
	, mSum(a + b)
	, mDiff(a - b)
	, mProd(a * b) 
{ 
}

inline int Object::GetObjectId() { return mObjectId; }

inline int Object::GetSum() { return mSum; }
inline int Object::GetDiff() { return mDiff; }
inline int Object::GetProd() { return mProd; }

