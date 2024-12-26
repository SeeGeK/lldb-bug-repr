#include <QObject>
struct Holder : public QObject
{
public:
   ~Holder() override;
private:
   std::vector<int> targets2_ = {1,2,3};
   std::vector<int> targets_;
};
