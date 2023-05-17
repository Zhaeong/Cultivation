#pragma once
#include <vulkan/vulkan.h>

namespace vkinitializers {

inline VkCommandPoolCreateInfo command_pool_create_info() {
  VkCommandPoolCreateInfo command_pool_create_info{};
  command_pool_create_info.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
  return command_pool_create_info;
}

inline VkCommandBufferAllocateInfo
command_buffer_allocate_info(VkCommandPool command_pool,
                             VkCommandBufferLevel level,
                             uint32_t buffer_count) {
  VkCommandBufferAllocateInfo command_buffer_allocate_info{};
  command_buffer_allocate_info.sType =
      VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
  command_buffer_allocate_info.commandPool = command_pool;
  command_buffer_allocate_info.level = level;
  command_buffer_allocate_info.commandBufferCount = buffer_count;
  return command_buffer_allocate_info;
}

inline VkCommandBufferBeginInfo command_buffer_begin_info() {
  VkCommandBufferBeginInfo cmdBufferBeginInfo{};
  cmdBufferBeginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
  return cmdBufferBeginInfo;
}

inline VkMemoryAllocateInfo memory_allocate_info() {
  VkMemoryAllocateInfo memory_allocation{};
  memory_allocation.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
  return memory_allocation;
}

inline VkBufferCreateInfo buffer_create_info(VkBufferUsageFlags usage,
                                             VkDeviceSize size) {
  VkBufferCreateInfo buffer_create_info{};
  buffer_create_info.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
  buffer_create_info.usage = usage;
  buffer_create_info.size = size;
  return buffer_create_info;
}

} // namespace vkinitializers