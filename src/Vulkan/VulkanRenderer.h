#ifndef __VULKANRENDERER_H__
#define __VULKANRENDERER_H__

class VulkanRenderer
{
public:    
    VulkanRenderer();
    ~VulkanRenderer();

    init();

private:
    void initInstance();
}

#endif //__VULKANRENDERER_H__