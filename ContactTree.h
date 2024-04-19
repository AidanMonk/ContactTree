#include "Queue.h"
#include "TreeNode.h"

class ContactTree
{
    private:
        TreeNode* Patient0;

    public:
        ContactTree();
        ~ContactTree();
        bool IsEmpty();
        int GetSize();
        void AddPatient0(const string&);
        void AddContact(const string&, const string&);
        TreeNode* LookUpContact(const string&);
        void DeleteContact(const string&);
        void DisplayContact(const string&);
        void TraceSource(const string&);
        void PrintContactCases(const string&);
        void PrintContactTree(const string&);
        void PrintHierarchicalTree();
};
