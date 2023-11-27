//This file is automatically generated by generator.lua from https://github.com/cimgui/imnodes
//based on imnodes.h file version XXX from https://github.com/Nelarius/imnodes
#ifndef CIMNODES_INCLUDED
#define CIMNODES_INCLUDED

#include "cimgui.h"

#ifdef CIMGUI_DEFINE_ENUMS_AND_STRUCTS

typedef struct ImGuiContext ImGuiContext;
typedef struct ImVec2 ImVec2;
typedef struct ImNodesContext ImNodesContext;
typedef struct ImNodesEditorContext ImNodesEditorContext;
typedef int ImNodesCol;
typedef int ImNodesStyleVar;
typedef int ImNodesStyleFlags;
typedef int ImNodesPinShape;
typedef int ImNodesAttributeFlags;
typedef int ImNodesMiniMapLocation;
typedef int ImNodesNodeSideShape;
typedef enum {
    ImNodesCol_NodeBackground = 0,
    ImNodesCol_NodeBackgroundHovered,
    ImNodesCol_NodeBackgroundSelected,
    ImNodesCol_NodeOutline,
    ImNodesCol_TitleBar,
    ImNodesCol_TitleBarHovered,
    ImNodesCol_TitleBarSelected,
    ImNodesCol_Link,
    ImNodesCol_LinkHovered,
    ImNodesCol_LinkSelected,
    ImNodesCol_Pin,
    ImNodesCol_PinHovered,
    ImNodesCol_BoxSelector,
    ImNodesCol_BoxSelectorOutline,
    ImNodesCol_GridBackground,
    ImNodesCol_GridLine,
    ImNodesCol_GridLinePrimary,
    ImNodesCol_MiniMapBackground,
    ImNodesCol_MiniMapBackgroundHovered,
    ImNodesCol_MiniMapOutline,
    ImNodesCol_MiniMapOutlineHovered,
    ImNodesCol_MiniMapNodeBackground,
    ImNodesCol_MiniMapNodeBackgroundHovered,
    ImNodesCol_MiniMapNodeBackgroundSelected,
    ImNodesCol_MiniMapNodeOutline,
    ImNodesCol_MiniMapLink,
    ImNodesCol_MiniMapLinkSelected,
    ImNodesCol_MiniMapCanvas,
    ImNodesCol_MiniMapCanvasOutline,
    ImNodesCol_COUNT
}ImNodesCol_;
typedef enum {
    ImNodesStyleVar_GridSpacing = 0,
    ImNodesStyleVar_NodeCornerRounding,
    ImNodesStyleVar_NodePadding,
    ImNodesStyleVar_NodeBorderThickness,
    ImNodesStyleVar_LinkThickness,
    ImNodesStyleVar_LinkLineSegmentsPerLength,
    ImNodesStyleVar_LinkHoverDistance,
    ImNodesStyleVar_PinCircleRadius,
    ImNodesStyleVar_PinQuadSideLength,
    ImNodesStyleVar_PinTriangleSideLength,
    ImNodesStyleVar_PinLineThickness,
    ImNodesStyleVar_PinHoverRadius,
    ImNodesStyleVar_PinOffset,
    ImNodesStyleVar_MiniMapPadding,
    ImNodesStyleVar_MiniMapOffset,
    ImNodesStyleVar_COUNT
}ImNodesStyleVar_;
typedef enum {
    ImNodesStyleFlags_None = 0,
    ImNodesStyleFlags_NodeOutline = 1 << 0,
    ImNodesStyleFlags_GridLines = 1 << 2,
    ImNodesStyleFlags_GridLinesPrimary = 1 << 3,
    ImNodesStyleFlags_GridSnapping = 1 << 4
}ImNodesStyleFlags_;
typedef enum {
    ImNodesPinShape_Circle,
    ImNodesPinShape_CircleFilled,
    ImNodesPinShape_Triangle,
    ImNodesPinShape_TriangleFilled,
    ImNodesPinShape_Quad,
    ImNodesPinShape_QuadFilled
}ImNodesPinShape_;
typedef enum {
    ImNodesNodeSideShape_Straight,
    ImNodesNodeSideShape_Round,
    ImNodesNodeSideShape_Sharp
}ImNodesNodeSideShape_;
typedef enum {
    ImNodesAttributeFlags_None = 0,
    ImNodesAttributeFlags_EnableLinkDetachWithDragClick = 1 << 0,
    ImNodesAttributeFlags_EnableLinkCreationOnSnap = 1 << 1
}ImNodesAttributeFlags_;
typedef struct ImNodesIO ImNodesIO;
struct EmulateThreeButtonMouse
{
        const bool* Modifier;
};
typedef struct EmulateThreeButtonMouse EmulateThreeButtonMouse;

struct LinkDetachWithModifierClick
{
        const bool* Modifier;
};
typedef struct LinkDetachWithModifierClick LinkDetachWithModifierClick;

struct MultipleSelectModifier
{
        const bool* Modifier;
};
typedef struct MultipleSelectModifier MultipleSelectModifier;

struct ImNodesIO
{
    EmulateThreeButtonMouse EmulateThreeButtonMouse;
    LinkDetachWithModifierClick LinkDetachWithModifierClick;
    MultipleSelectModifier MultipleSelectModifier;
    int AltMouseButton;
    float AutoPanningSpeed;
};
typedef struct EmulateThreeButtonMouse EmulateThreeButtonMouse;
typedef struct LinkDetachWithModifierClick LinkDetachWithModifierClick;
typedef struct MultipleSelectModifier MultipleSelectModifier;
typedef struct ImNodesStyle ImNodesStyle;
struct ImNodesStyle
{
    float GridSpacing;
    float NodeCornerRounding;
    float NodeShapedSideDepth;
    ImVec2 NodePadding;
    float NodeBorderThickness;
    float LinkThickness;
    float LinkLineSegmentsPerLength;
    float LinkHoverDistance;
    float PinCircleRadius;
    float PinQuadSideLength;
    float PinTriangleSideLength;
    float PinLineThickness;
    float PinHoverRadius;
    float PinOffset;
    ImVec2 MiniMapPadding;
    ImVec2 MiniMapOffset;
    ImNodesStyleFlags Flags;
    unsigned int Colors[ImNodesCol_COUNT];
};
typedef enum {
    ImNodesMiniMapLocation_BottomLeft,
    ImNodesMiniMapLocation_BottomRight,
    ImNodesMiniMapLocation_TopLeft,
    ImNodesMiniMapLocation_TopRight,
}ImNodesMiniMapLocation_;
struct ImGuiContext;
struct ImVec2;
struct ImNodesContext;
struct ImNodesEditorContext;
typedef void (*ImNodesMiniMapNodeHoveringCallback)(int, void*);
typedef void* ImNodesMiniMapNodeHoveringCallbackUserData;
#else
#endif // CIMGUI_DEFINE_ENUMS_AND_STRUCTS

#ifndef CIMGUI_DEFINE_ENUMS_AND_STRUCTS
typedef struct ImNodesIO::EmulateThreeButtonMouse EmulateThreeButtonMouse;
typedef struct ImNodesIO::LinkDetachWithModifierClick LinkDetachWithModifierClick;
typedef struct ImNodesIO::MultipleSelectModifier MultipleSelectModifier;
#endif //CIMGUI_DEFINE_ENUMS_AND_STRUCTS
CIMGUI_API EmulateThreeButtonMouse* EmulateThreeButtonMouse_EmulateThreeButtonMouse(void);
CIMGUI_API void EmulateThreeButtonMouse_destroy(EmulateThreeButtonMouse* self);
CIMGUI_API LinkDetachWithModifierClick* LinkDetachWithModifierClick_LinkDetachWithModifierClick(void);
CIMGUI_API void LinkDetachWithModifierClick_destroy(LinkDetachWithModifierClick* self);
CIMGUI_API MultipleSelectModifier* MultipleSelectModifier_MultipleSelectModifier(void);
CIMGUI_API void MultipleSelectModifier_destroy(MultipleSelectModifier* self);
CIMGUI_API ImNodesIO* ImNodesIO_ImNodesIO(void);
CIMGUI_API void ImNodesIO_destroy(ImNodesIO* self);
CIMGUI_API ImNodesStyle* ImNodesStyle_ImNodesStyle(void);
CIMGUI_API void ImNodesStyle_destroy(ImNodesStyle* self);
CIMGUI_API void imnodes_SetImGuiContext(ImGuiContext* ctx);
CIMGUI_API ImNodesContext* imnodes_CreateContext(void);
CIMGUI_API void imnodes_DestroyContext(ImNodesContext* ctx);
CIMGUI_API ImNodesContext* imnodes_GetCurrentContext(void);
CIMGUI_API void imnodes_SetCurrentContext(ImNodesContext* ctx);
CIMGUI_API ImNodesEditorContext* imnodes_EditorContextCreate(void);
CIMGUI_API void imnodes_EditorContextFree(ImNodesEditorContext* noname1);
CIMGUI_API void imnodes_EditorContextSet(ImNodesEditorContext* noname1);
CIMGUI_API void imnodes_EditorContextGetPanning(ImVec2 *pOut);
CIMGUI_API void imnodes_EditorContextResetPanning(const ImVec2 pos);
CIMGUI_API void imnodes_EditorContextMoveToNode(const int node_id);
CIMGUI_API ImNodesIO* imnodes_GetIO(void);
CIMGUI_API ImNodesStyle* imnodes_GetStyle(void);
CIMGUI_API void imnodes_StyleColorsDark(ImNodesStyle* dest);
CIMGUI_API void imnodes_StyleColorsClassic(ImNodesStyle* dest);
CIMGUI_API void imnodes_StyleColorsLight(ImNodesStyle* dest);
CIMGUI_API void imnodes_BeginNodeEditor(void);
CIMGUI_API void imnodes_EndNodeEditor(void);
CIMGUI_API void imnodes_MiniMap(const float minimap_size_fraction,const ImNodesMiniMapLocation location,const ImNodesMiniMapNodeHoveringCallback node_hovering_callback,const ImNodesMiniMapNodeHoveringCallbackUserData node_hovering_callback_data);
CIMGUI_API void imnodes_PushColorStyle(ImNodesCol item,unsigned int color);
CIMGUI_API void imnodes_PopColorStyle(void);
CIMGUI_API void imnodes_PushStyleVar_Float(ImNodesStyleVar style_item,float value);
CIMGUI_API void imnodes_PushStyleVar_Vec2(ImNodesStyleVar style_item,const ImVec2 value);
CIMGUI_API void imnodes_PopStyleVar(int count);
CIMGUI_API void imnodes_BeginNode(int id);
CIMGUI_API void imnodes_EndNode(void);
CIMGUI_API void imnodes_GetNodeDimensions(ImVec2 *pOut,int id);
CIMGUI_API void imnodes_BeginNodeTitleBar(void);
CIMGUI_API void imnodes_EndNodeTitleBar(void);
CIMGUI_API void imnodes_BeginInputAttribute(int id,ImNodesPinShape shape,int category);
CIMGUI_API void imnodes_EndInputAttribute(void);
CIMGUI_API void imnodes_BeginOutputAttribute(int id,ImNodesPinShape shape,int category);
CIMGUI_API void imnodes_EndOutputAttribute(void);
CIMGUI_API void imnodes_BeginStaticAttribute(int id);
CIMGUI_API void imnodes_EndStaticAttribute(void);
CIMGUI_API void imnodes_PushAttributeFlag(ImNodesAttributeFlags flag);
CIMGUI_API void imnodes_PopAttributeFlag(void);
CIMGUI_API void imnodes_Link(int id,int start_attribute_id,int end_attribute_id);
CIMGUI_API void imnodes_SetNodeDraggable(int node_id,const bool draggable);
CIMGUI_API void imnodes_SetNodeLeftSideShape(const int node_id,const ImNodesNodeSideShape shape);
CIMGUI_API void imnodes_SetNodeRightSideShape(const int node_id,const ImNodesNodeSideShape shape);
CIMGUI_API void imnodes_SetNodeShapedSideDepth(const int node_id,const float depth);
CIMGUI_API void imnodes_SetNodeScreenSpacePos(int node_id,const ImVec2 screen_space_pos);
CIMGUI_API void imnodes_SetNodeEditorSpacePos(int node_id,const ImVec2 editor_space_pos);
CIMGUI_API void imnodes_SetNodeGridSpacePos(int node_id,const ImVec2 grid_pos);
CIMGUI_API void imnodes_GetNodeScreenSpacePos(ImVec2 *pOut,const int node_id);
CIMGUI_API void imnodes_GetNodeEditorSpacePos(ImVec2 *pOut,const int node_id);
CIMGUI_API void imnodes_GetNodeGridSpacePos(ImVec2 *pOut,const int node_id);
CIMGUI_API void imnodes_SnapNodeToGrid(int node_id);
CIMGUI_API bool imnodes_IsEditorHovered(void);
CIMGUI_API bool imnodes_IsNodeHovered(int* node_id);
CIMGUI_API bool imnodes_IsLinkHovered(int* link_id);
CIMGUI_API bool imnodes_IsPinHovered(int* attribute_id);
CIMGUI_API int imnodes_NumSelectedNodes(void);
CIMGUI_API int imnodes_NumSelectedLinks(void);
CIMGUI_API void imnodes_GetSelectedNodes(int* node_ids);
CIMGUI_API void imnodes_GetSelectedLinks(int* link_ids);
CIMGUI_API void imnodes_ClearNodeSelection_Nil(void);
CIMGUI_API void imnodes_ClearLinkSelection_Nil(void);
CIMGUI_API void imnodes_SelectNode(int node_id);
CIMGUI_API void imnodes_ClearNodeSelection_Int(int node_id);
CIMGUI_API bool imnodes_IsNodeSelected(int node_id);
CIMGUI_API void imnodes_SelectLink(int link_id);
CIMGUI_API void imnodes_ClearLinkSelection_Int(int link_id);
CIMGUI_API bool imnodes_IsLinkSelected(int link_id);
CIMGUI_API bool imnodes_IsAttributeActive(void);
CIMGUI_API bool imnodes_IsAnyAttributeActive(int* attribute_id);
CIMGUI_API bool imnodes_IsLinkStarted(int* started_at_attribute_id);
CIMGUI_API bool imnodes_IsLinkDropped(int* started_at_attribute_id,bool including_detached_links);
CIMGUI_API bool imnodes_IsLinkCreated_BoolPtr(int* started_at_attribute_id,int* ended_at_attribute_id,bool* created_from_snap);
CIMGUI_API bool imnodes_IsLinkCreated_IntPtr(int* started_at_node_id,int* started_at_attribute_id,int* ended_at_node_id,int* ended_at_attribute_id,bool* created_from_snap);
CIMGUI_API bool imnodes_IsLinkDestroyed(int* link_id);
CIMGUI_API const char* imnodes_SaveCurrentEditorStateToIniString(size_t* data_size);
CIMGUI_API const char* imnodes_SaveEditorStateToIniString(const ImNodesEditorContext* editor,size_t* data_size);
CIMGUI_API void imnodes_LoadCurrentEditorStateFromIniString(const char* data,size_t data_size);
CIMGUI_API void imnodes_LoadEditorStateFromIniString(ImNodesEditorContext* editor,const char* data,size_t data_size);
CIMGUI_API void imnodes_SaveCurrentEditorStateToIniFile(const char* file_name);
CIMGUI_API void imnodes_SaveEditorStateToIniFile(const ImNodesEditorContext* editor,const char* file_name);
CIMGUI_API void imnodes_LoadCurrentEditorStateFromIniFile(const char* file_name);
CIMGUI_API void imnodes_LoadEditorStateFromIniFile(ImNodesEditorContext* editor,const char* file_name);


//needed for io.link_detach_with_modifier_click.modifier = &ImGui::GetIO().KeyCtrl
CIMGUI_API bool* getIOKeyCtrlPtr();

#endif //CIMNODES_INCLUDED




