#ifndef COMPONENT_H
#define COMPONENT_H

namespace IDF
{
   class Component : public TaskBase
   {
   public:
   private:
      void setup() override;
      void loop() override;
      void cleanup() override;
   }; // class Component
} // namespace IDF
#endif // COMPONENT_H
