//This file is automatically generated by generator.lua from https://github.com/cimgui/imnodes
//based on imnodes.h file version XXX from https://github.com/Nelarius/imnodes
#include "imgui.h"
#include "imgui_internal.h"
#include "./imnodes/imnodes.h"
#include "cimnodes.h"



CIMGUI_API EmulateThreeButtonMouse* EmulateThreeButtonMouse_EmulateThreeButtonMouse(void)
{
    return IM_NEW(EmulateThreeButtonMouse)();
}
CIMGUI_API void EmulateThreeButtonMouse_destroy(EmulateThreeButtonMouse* self)
{
    IM_DELETE(self);
}
CIMGUI_API LinkDetachWithModifierClick* LinkDetachWithModifierClick_LinkDetachWithModifierClick(void)
{
    return IM_NEW(LinkDetachWithModifierClick)();
}
CIMGUI_API void LinkDetachWithModifierClick_destroy(LinkDetachWithModifierClick* self)
{
    IM_DELETE(self);
}
CIMGUI_API MultipleSelectModifier* MultipleSelectModifier_MultipleSelectModifier(void)
{
    return IM_NEW(MultipleSelectModifier)();
}
CIMGUI_API void MultipleSelectModifier_destroy(MultipleSelectModifier* self)
{
    IM_DELETE(self);
}
CIMGUI_API ImNodesIO* ImNodesIO_ImNodesIO(void)
{
    return IM_NEW(ImNodesIO)();
}
CIMGUI_API void ImNodesIO_destroy(ImNodesIO* self)
{
    IM_DELETE(self);
}
CIMGUI_API ImNodesStyle* ImNodesStyle_ImNodesStyle(void)
{
    return IM_NEW(ImNodesStyle)();
}
CIMGUI_API void ImNodesStyle_destroy(ImNodesStyle* self)
{
    IM_DELETE(self);
}
CIMGUI_API void imnodes_SetImGuiContext(ImGuiContext* ctx)
{
    return imnodes::SetImGuiContext(ctx);
}
CIMGUI_API ImNodesContext* imnodes_CreateContext()
{
    return imnodes::CreateContext();
}
CIMGUI_API void imnodes_DestroyContext(ImNodesContext* ctx)
{
    return imnodes::DestroyContext(ctx);
}
CIMGUI_API ImNodesContext* imnodes_GetCurrentContext()
{
    return imnodes::GetCurrentContext();
}
CIMGUI_API void imnodes_SetCurrentContext(ImNodesContext* ctx)
{
    return imnodes::SetCurrentContext(ctx);
}
CIMGUI_API ImNodesEditorContext* imnodes_EditorContextCreate()
{
    return imnodes::EditorContextCreate();
}
CIMGUI_API void imnodes_EditorContextFree(ImNodesEditorContext* noname1)
{
    return imnodes::EditorContextFree(noname1);
}
CIMGUI_API void imnodes_EditorContextSet(ImNodesEditorContext* noname1)
{
    return imnodes::EditorContextSet(noname1);
}
CIMGUI_API void imnodes_EditorContextGetPanning(ImVec2 *pOut)
{
    *pOut = imnodes::EditorContextGetPanning();
}
CIMGUI_API void imnodes_EditorContextResetPanning(const ImVec2 pos)
{
    return imnodes::EditorContextResetPanning(pos);
}
CIMGUI_API void imnodes_EditorContextMoveToNode(const int node_id)
{
    return imnodes::EditorContextMoveToNode(node_id);
}
CIMGUI_API ImNodesIO* imnodes_GetIO()
{
    return &imnodes::GetIO();
}
CIMGUI_API ImNodesStyle* imnodes_GetStyle()
{
    return &imnodes::GetStyle();
}
CIMGUI_API void imnodes_StyleColorsDark(ImNodesStyle* dest)
{
    return imnodes::StyleColorsDark(dest);
}
CIMGUI_API void imnodes_StyleColorsClassic(ImNodesStyle* dest)
{
    return imnodes::StyleColorsClassic(dest);
}
CIMGUI_API void imnodes_StyleColorsLight(ImNodesStyle* dest)
{
    return imnodes::StyleColorsLight(dest);
}
CIMGUI_API void imnodes_BeginNodeEditor()
{
    return imnodes::BeginNodeEditor();
}
CIMGUI_API void imnodes_EndNodeEditor()
{
    return imnodes::EndNodeEditor();
}
CIMGUI_API void imnodes_MiniMap(const float minimap_size_fraction,const ImNodesMiniMapLocation location,const ImNodesMiniMapNodeHoveringCallback node_hovering_callback,const ImNodesMiniMapNodeHoveringCallbackUserData node_hovering_callback_data)
{
    return imnodes::MiniMap(minimap_size_fraction,location,node_hovering_callback,node_hovering_callback_data);
}
CIMGUI_API void imnodes_PushColorStyle(ImNodesCol item,unsigned int color)
{
    return imnodes::PushColorStyle(item,color);
}
CIMGUI_API void imnodes_PopColorStyle()
{
    return imnodes::PopColorStyle();
}
CIMGUI_API void imnodes_PushStyleVar_Float(ImNodesStyleVar style_item,float value)
{
    return imnodes::PushStyleVar(style_item,value);
}
CIMGUI_API void imnodes_PushStyleVar_Vec2(ImNodesStyleVar style_item,const ImVec2 value)
{
    return imnodes::PushStyleVar(style_item,value);
}
CIMGUI_API void imnodes_PopStyleVar(int count)
{
    return imnodes::PopStyleVar(count);
}
CIMGUI_API void imnodes_BeginNode(int id)
{
    return imnodes::BeginNode(id);
}
CIMGUI_API void imnodes_EndNode()
{
    return imnodes::EndNode();
}
CIMGUI_API void imnodes_GetNodeDimensions(ImVec2 *pOut,int id)
{
    *pOut = imnodes::GetNodeDimensions(id);
}
CIMGUI_API void imnodes_BeginNodeTitleBar()
{
    return imnodes::BeginNodeTitleBar();
}
CIMGUI_API void imnodes_EndNodeTitleBar()
{
    return imnodes::EndNodeTitleBar();
}
CIMGUI_API void imnodes_BeginInputAttribute(int id,ImNodesPinShape shape)
{
    return imnodes::BeginInputAttribute(id,shape);
}
CIMGUI_API void imnodes_EndInputAttribute()
{
    return imnodes::EndInputAttribute();
}
CIMGUI_API void imnodes_BeginOutputAttribute(int id,ImNodesPinShape shape)
{
    return imnodes::BeginOutputAttribute(id,shape);
}
CIMGUI_API void imnodes_EndOutputAttribute()
{
    return imnodes::EndOutputAttribute();
}
CIMGUI_API void imnodes_BeginStaticAttribute(int id)
{
    return imnodes::BeginStaticAttribute(id);
}
CIMGUI_API void imnodes_EndStaticAttribute()
{
    return imnodes::EndStaticAttribute();
}
CIMGUI_API void imnodes_PushAttributeFlag(ImNodesAttributeFlags flag)
{
    return imnodes::PushAttributeFlag(flag);
}
CIMGUI_API void imnodes_PopAttributeFlag()
{
    return imnodes::PopAttributeFlag();
}
CIMGUI_API void imnodes_Link(int id,int start_attribute_id,int end_attribute_id)
{
    return imnodes::Link(id,start_attribute_id,end_attribute_id);
}
CIMGUI_API void imnodes_SetNodeDraggable(int node_id,const bool draggable)
{
    return imnodes::SetNodeDraggable(node_id,draggable);
}
CIMGUI_API void imnodes_SetNodeLeftSideShape(const int node_id,const ImNodesNodeSideShape shape)
{
    return imnodes::SetNodeLeftSideShape(node_id,shape);
}
CIMGUI_API void imnodes_SetNodeRightSideShape(const int node_id,const ImNodesNodeSideShape shape)
{
    return imnodes::SetNodeRightSideShape(node_id,shape);
}
CIMGUI_API void imnodes_SetNodeShapedSideDepth(const int node_id,const float depth)
{
    return imnodes::SetNodeShapedSideDepth(node_id,depth);
}
CIMGUI_API void imnodes_SetNodeScreenSpacePos(int node_id,const ImVec2 screen_space_pos)
{
    return imnodes::SetNodeScreenSpacePos(node_id,screen_space_pos);
}
CIMGUI_API void imnodes_SetNodeEditorSpacePos(int node_id,const ImVec2 editor_space_pos)
{
    return imnodes::SetNodeEditorSpacePos(node_id,editor_space_pos);
}
CIMGUI_API void imnodes_SetNodeGridSpacePos(int node_id,const ImVec2 grid_pos)
{
    return imnodes::SetNodeGridSpacePos(node_id,grid_pos);
}
CIMGUI_API void imnodes_GetNodeScreenSpacePos(ImVec2 *pOut,const int node_id)
{
    *pOut = imnodes::GetNodeScreenSpacePos(node_id);
}
CIMGUI_API void imnodes_GetNodeEditorSpacePos(ImVec2 *pOut,const int node_id)
{
    *pOut = imnodes::GetNodeEditorSpacePos(node_id);
}
CIMGUI_API void imnodes_GetNodeGridSpacePos(ImVec2 *pOut,const int node_id)
{
    *pOut = imnodes::GetNodeGridSpacePos(node_id);
}
CIMGUI_API void imnodes_SnapNodeToGrid(int node_id)
{
    return imnodes::SnapNodeToGrid(node_id);
}
CIMGUI_API void imnodes_SetPinCategory(const int pin_id,const int category)
{
    return imnodes::SetPinCategory(pin_id,category);
}
CIMGUI_API void imnodes_SetPinLinkStyle(const int pin_id,const ImNodesLinkStyle style)
{
    return imnodes::SetPinLinkStyle(pin_id,style);
}
CIMGUI_API bool imnodes_IsEditorHovered()
{
    return imnodes::IsEditorHovered();
}
CIMGUI_API bool imnodes_IsNodeHovered(int* node_id)
{
    return imnodes::IsNodeHovered(node_id);
}
CIMGUI_API bool imnodes_IsLinkHovered(int* link_id)
{
    return imnodes::IsLinkHovered(link_id);
}
CIMGUI_API bool imnodes_IsPinHovered(int* attribute_id)
{
    return imnodes::IsPinHovered(attribute_id);
}
CIMGUI_API int imnodes_NumSelectedNodes()
{
    return imnodes::NumSelectedNodes();
}
CIMGUI_API int imnodes_NumSelectedLinks()
{
    return imnodes::NumSelectedLinks();
}
CIMGUI_API void imnodes_GetSelectedNodes(int* node_ids)
{
    return imnodes::GetSelectedNodes(node_ids);
}
CIMGUI_API void imnodes_GetSelectedLinks(int* link_ids)
{
    return imnodes::GetSelectedLinks(link_ids);
}
CIMGUI_API void imnodes_ClearNodeSelection_Nil()
{
    return imnodes::ClearNodeSelection();
}
CIMGUI_API void imnodes_ClearLinkSelection_Nil()
{
    return imnodes::ClearLinkSelection();
}
CIMGUI_API void imnodes_SelectNode(int node_id)
{
    return imnodes::SelectNode(node_id);
}
CIMGUI_API void imnodes_ClearNodeSelection_Int(int node_id)
{
    return imnodes::ClearNodeSelection(node_id);
}
CIMGUI_API bool imnodes_IsNodeSelected(int node_id)
{
    return imnodes::IsNodeSelected(node_id);
}
CIMGUI_API void imnodes_SelectLink(int link_id)
{
    return imnodes::SelectLink(link_id);
}
CIMGUI_API void imnodes_ClearLinkSelection_Int(int link_id)
{
    return imnodes::ClearLinkSelection(link_id);
}
CIMGUI_API bool imnodes_IsLinkSelected(int link_id)
{
    return imnodes::IsLinkSelected(link_id);
}
CIMGUI_API bool imnodes_IsAttributeActive()
{
    return imnodes::IsAttributeActive();
}
CIMGUI_API bool imnodes_IsAnyAttributeActive(int* attribute_id)
{
    return imnodes::IsAnyAttributeActive(attribute_id);
}
CIMGUI_API bool imnodes_IsLinkStarted(int* started_at_attribute_id)
{
    return imnodes::IsLinkStarted(started_at_attribute_id);
}
CIMGUI_API bool imnodes_IsLinkDropped(int* started_at_attribute_id,bool including_detached_links)
{
    return imnodes::IsLinkDropped(started_at_attribute_id,including_detached_links);
}
CIMGUI_API bool imnodes_IsLinkCreated_BoolPtr(int* started_at_attribute_id,int* ended_at_attribute_id,bool* created_from_snap)
{
    return imnodes::IsLinkCreated(started_at_attribute_id,ended_at_attribute_id,created_from_snap);
}
CIMGUI_API bool imnodes_IsLinkCreated_IntPtr(int* started_at_node_id,int* started_at_attribute_id,int* ended_at_node_id,int* ended_at_attribute_id,bool* created_from_snap)
{
    return imnodes::IsLinkCreated(started_at_node_id,started_at_attribute_id,ended_at_node_id,ended_at_attribute_id,created_from_snap);
}
CIMGUI_API bool imnodes_IsLinkDestroyed(int* link_id)
{
    return imnodes::IsLinkDestroyed(link_id);
}
CIMGUI_API const char* imnodes_SaveCurrentEditorStateToIniString(size_t* data_size)
{
    return imnodes::SaveCurrentEditorStateToIniString(data_size);
}
CIMGUI_API const char* imnodes_SaveEditorStateToIniString(const ImNodesEditorContext* editor,size_t* data_size)
{
    return imnodes::SaveEditorStateToIniString(editor,data_size);
}
CIMGUI_API void imnodes_LoadCurrentEditorStateFromIniString(const char* data,size_t data_size)
{
    return imnodes::LoadCurrentEditorStateFromIniString(data,data_size);
}
CIMGUI_API void imnodes_LoadEditorStateFromIniString(ImNodesEditorContext* editor,const char* data,size_t data_size)
{
    return imnodes::LoadEditorStateFromIniString(editor,data,data_size);
}
CIMGUI_API void imnodes_SaveCurrentEditorStateToIniFile(const char* file_name)
{
    return imnodes::SaveCurrentEditorStateToIniFile(file_name);
}
CIMGUI_API void imnodes_SaveEditorStateToIniFile(const ImNodesEditorContext* editor,const char* file_name)
{
    return imnodes::SaveEditorStateToIniFile(editor,file_name);
}
CIMGUI_API void imnodes_LoadCurrentEditorStateFromIniFile(const char* file_name)
{
    return imnodes::LoadCurrentEditorStateFromIniFile(file_name);
}
CIMGUI_API void imnodes_LoadEditorStateFromIniFile(ImNodesEditorContext* editor,const char* file_name)
{
    return imnodes::LoadEditorStateFromIniFile(editor,file_name);
}


//needed for io.link_detach_with_modifier_click.modifier = &ImGui::GetIO().KeyCtrl
CIMGUI_API bool* getIOKeyCtrlPtr()
{
    return &ImGui::GetIO().KeyCtrl;
}
