/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// XHTML elements (zlib license) provided for TGUI - Texus' Graphical User Interface
// Copyright (C) 2023 Steffen Ploetz (Steffen.Ploetz@cityweb.de)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef TGUI_XHTML_ELEMENT_HPP
#define TGUI_XHTML_ELEMENT_HPP

namespace tgui  { namespace xhtml
{

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// @brief Collection of implemented XHTML element types
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    struct TGUI_API XhtmlElementType
    {
    public:
        static constexpr const char  DocType[] = "!doctype";                   //!< The tag name of an !DOCTYPE element
        static constexpr const char  Document[] = "document";                  //!< The tag name of a DOCUMENT element
        static constexpr const char  Style[] = "style";                        //!< The tag name of a STYLE element
        static constexpr const char  Break[] = "br";                           //!< The tag name of a BREAK element
        static constexpr const char  Text[] = "text";                          //!< The virtual tag name of an INNER-TEXT element
        static constexpr const char  Html[] = "html";                          //!< The tag name of a HTML element
        static constexpr const char  Head[] = "head";                          //!< The tag name of a HEAD element
        static constexpr const char  Meta[] = "meta";                          //!< The tag name of a META element
        static constexpr const char  Link[] = "link";                          //!< The tag name of a LINK element
        static constexpr const char  Title[] = "title";                        //!< The tag name of a TITLE element
        static constexpr const char  Body[] = "body";                          //!< The tag name of a BODY element
        static constexpr const char  Input[] = "input";                        //!< The tag name of an INPUT element
        static constexpr const char  Label[] = "label";                        //!< The tag name of a LABEL element

        static constexpr const char  H1[] = "h1";                              //!< The tag name of a HEADLINE-1 element
        static constexpr const char  H2[] = "h2";                              //!< The tag name of a HEADLINE-2 element
        static constexpr const char  H3[] = "h3";                              //!< The tag name of a HEADLINE-3 element
        static constexpr const char  H4[] = "h4";                              //!< The tag name of a HEADLINE-4 element
        static constexpr const char  H5[] = "h5";                              //!< The tag name of a HEADLINE-5 element
        static constexpr const char  H6[] = "h6";                              //!< The tag name of a HEADLINE-6 element

        static constexpr const char  Table[] = "table";                        //!< The tag name of a table element
        static constexpr const char  TableHead[] = "thead";                    //!< The tag name of a table head element
        static constexpr const char  TableBody[] = "tbody";                    //!< The tag name of a table body element
        static constexpr const char  TableFoot[] = "tfoot";                    //!< The tag name of a table foot element
        static constexpr const char  TableRow[] = "tr";                        //!< The tag name of a table row element
        static constexpr const char  TableHeaderCell[] = "th";                 //!< The tag name of a table header cell element
        static constexpr const char  TableDataCell[] = "td";                   //!< The tag name of a table data cell element

        static constexpr const char  Emphasized[] = "em";                      //!< The tag name of an EMPHASIZED element
        static constexpr const char  Italic[] = "i";                           //!< The tag name of an ITALIC element
        static constexpr const char  Strong[] = "s";                           //!< The tag name of a STRONG element
        static constexpr const char  Bold[] = "b";                             //!< The tag name of a BOLD element
        static constexpr const char  Underline[] = "u";                        //!< The tag name of an UNDERLINE element
        static constexpr const char  Superscript[] = "sup";                    //!< The tag name of a SUPERSCRIPT element
        static constexpr const char  Subscript[] = "sub";                      //!< The tag name of a SUBSCRIPT element

        static constexpr const char  UnorderedList[] = "ul";                   //!< The tag name of an UNORDERED-LIST element
        static constexpr const char  OrderedList[] = "ol";                     //!< The tag name of an ORDERED-LIST element
        static constexpr const char  ListItem[] = "li";                        //!< The tag name of a LIST-ITEM element
        static constexpr const char  Span[] = "span";                          //!< The tag name of a SPAN element
        static constexpr const char  Division[] = "div";                       //!< The tag name of a DIVISION element
        static constexpr const char  Preformatted[] = "pre";                   //!< The tag name of a PREFORMATTED element
        static constexpr const char  Code[] = "code";                          //!< The tag name of a CODE element
        static constexpr const char  Paragraph[] = "p";                        //!< The tag name of a PARAGRAPH element

        static constexpr const char* Anchor = MarkupLanguageElement::Anchor;   //!< The tag name of an ANCHOR element
        static constexpr const char  Image[] = "img";                          //!< The tag name of an IMAGE element
        static constexpr const char  Script[] = "script";                      //!< The tag name of a SCRIPT element

    private:
        static XhtmlElementType m_dataTypes[]; //!< The supported XHTML element types

    public:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Determine the element type from the element type name
        ///
        /// @param text      The element type from the element type name on success, or the element type 'empty' otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static XhtmlElementType getType(const char* typeName = "empty");

    public:
        const char*             TypeName;            //!< The element type name
        bool                    IsAutoClosed;        //!< The flag indicating whether element can contain inner text
        bool                    IsStyleable;         //!< The flag indicating whether element can have a style entry
        bool                    IsContainer;         //!< The flag indicating whether element can have children
        bool                    IsStructuringBlock;  //!< The flag indicating whether element is a structuring block (H1, ...)
        bool                    IsTextBlock;         //!< The flag indicating whether element is a text block (div, pre, ...)
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Forward declarations
    class TGUI_API XhtmlStyle;
    class TGUI_API XhtmlInnerText;
    class TGUI_API XhtmlStyleableElement;
    class TGUI_API XhtmlContainerElement;
    class TGUI_API XhtmlStyleableNoncontainerElement;
    class TGUI_API XhtmlStyleableContainerElement;
    class TGUI_API XhtmlListItem;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// @brief Base class for **all** XHTML element (text and node) classes
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class TGUI_API XhtmlElement : public MarkupLanguageElement
    {
    public:
        using Ptr = std::shared_ptr<XhtmlElement>; //!< Shared XHTML element (base implementation) pointer
        using ConstPtr = std::shared_ptr<const XhtmlElement>; //!< Shared constant XHTML element (base implementation) pointer

    public:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief The default constructor
        ///
        /// ATTENTION: To register a parent and to register this new object to a parent are the responsibilities of the caller!
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        XhtmlElement()
            : m_elementType(XhtmlElementType::getType()), m_parent(nullptr), m_attributes(), m_children(),
              m_startTagBeginPosition(0), m_startTagEndPosition(0),m_stopTagBeginPosition(0), m_stopTagEndPosition(0),
              m_isParsedAsAutoClosed(false)
        {   m_attributes = std::make_shared<std::vector<XhtmlAttribute::Ptr>>();   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief The initializing constructor
        ///
        /// ATTENTION: To register a parent and to register this new object to a parent are the responsibilities of the caller!
        ///
        /// @param typeName  The type name of the element type to associate
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        XhtmlElement(const char* typeName)
            : m_elementType(XhtmlElementType::getType(typeName)), m_parent(nullptr), m_attributes(), m_children(),
              m_startTagBeginPosition(0), m_startTagEndPosition(0),m_stopTagBeginPosition(0), m_stopTagEndPosition(0),
              m_isParsedAsAutoClosed(false)
        {   m_attributes = std::make_shared<std::vector<XhtmlAttribute::Ptr>>();   }


    public:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief The virtual default destructor
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual ~XhtmlElement()
        {   m_attributes->clear();   }

    public:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the element ID or an empty string. Implements the abstract MarkupLanguageElement class method
        ///
        /// @return The element ID on success or an empty string otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        const tgui::String& getId() const;

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the element name or an empty string. Implements the abstract MarkupLanguageElement class method
        ///
        /// @return The element name on success or an empty string otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        const tgui::String& getName() const;

    public:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Decode special XHTML characters (like '&lt;' --> '<', '&gt;' --> '>', '&amp;' --> '&', ...
        ///
        /// @param text      The text to decode
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static String& decode(String& text);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Encode special XHTML characters (like '<' --> '&lt;', '>' --> '&gt;', '&' --> '&amp;', ...
        ///
        /// @param text      The text to decode
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static String& encode(String& text);

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new XHTML element, according to the indicated typeName
        ///
        /// @param typeName              The type name of the requested XHTML element type
        /// @param parent                The parent to register
        /// @param beginPosition         The cursor position of the XHTML parser, the start tag of this element begins
        /// @param endPosition           The cursor position of the XHTML parser, the start tag of this element ends
        /// @param isParsedAsAutoClosed  The flag indicating whether the XHTML parser detected this element has no closing tag
        ///
        /// @return The new XHTML element of the requested type on success, or a generic XHTML element otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static XhtmlElement::Ptr createAuto(const char* typeName, XhtmlElement::Ptr parent,
            const size_t beginPosition, const size_t endPosition, const bool isParsedAsAutoClosed);

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Style element
        ///
        /// Prefer the factory method in cases where the Style element needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The optional parent to register
        ///
        /// @return The new Style element
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlStyle> createStyle(XhtmlElement::Ptr parent = nullptr);

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Break element
        ///
        /// Prefer the factory method in cases where the Break element needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The optional parent to register
        ///
        /// @return The new Break element
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static XhtmlElement::Ptr createBreak(XhtmlElement::Ptr parent = nullptr);

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Text element
        ///
        /// Prefer the factory method in cases where the Text element needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The optional parent to register
        ///
        /// @return The new Text element
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlInnerText> createInnerText(XhtmlElement::Ptr parent = nullptr);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Text element with text initialization
        ///
        /// Prefer the factory method in cases where the Text element needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new Text element
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlInnerText> createInnerText(XhtmlElement::Ptr parent, String text);

        //-----------------------------------------------------------------------------------------------------------------------
protected:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new container node
        ///
        /// Prefer the factory method in cases where the container node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param elementType  The type name of the container node to create
        /// @param parent       The parent to register. Can be nullptr
        /// @param child        The optional child to register
        ///
        /// @return The new container node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlContainerElement> createContainer(const char* elementType, XhtmlElement::Ptr parent, XhtmlElement::Ptr child);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new container node
        ///
        /// Prefer the factory method in cases where the container node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param elementType  The type name of the container node to create
        /// @param parent       The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new container node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlContainerElement> createContainer(const char* elementType, XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children);

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new styleable container node
        ///
        /// Prefer the factory method in cases where the styleable container node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param elementType  The type name of the styleable container node to create
        /// @param parent       The parent to register. Can be nullptr
        /// @param child        The optional child to register
        ///
        /// @return The new styleable container node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlStyleableContainerElement> createStyleableContainer(const char* elementType, XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new styleable container node
        ///
        /// Prefer the factory method in cases where the styleable container node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param elementType  The type name of the styleable container node to create
        /// @param parent       The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new styleable container node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlStyleableContainerElement> createStyleableContainer(const char* elementType, XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new styleable container node
        ///
        /// Prefer the factory method in cases where the styleable container node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param elementType  The type name of the styleable container node to create
        /// @param parent       The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child        The optional child to register
        ///
        /// @return The new styleable container node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlStyleableContainerElement> createStyleableContainer(const char* elementType, XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new styleable container node
        ///
        /// Prefer the factory method in cases where the styleable container node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param elementType  The type name of the styleable container node to create
        /// @param parent       The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param children  The collection of children to register
        ///
        /// @return The new styleable container node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlStyleableContainerElement> createStyleableContainer(const char* elementType, XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children);

        //-----------------------------------------------------------------------------------------------------------------------
public:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new HTML (container) node
        ///
        /// Prefer the factory method in cases where the HTML (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new HTML (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createHtml(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createContainer(XhtmlElementType::Html, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new HTML (container) node
        ///
        /// Prefer the factory method in cases where the HTML (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new HTML (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createHtml(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createContainer(XhtmlElementType::Html, parent, children);   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Header (container) node
        ///
        /// Prefer the factory method in cases where the Header (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Header (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createHead(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createContainer(XhtmlElementType::Head, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Header (container) node
        ///
        /// Prefer the factory method in cases where the Header (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Header (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createHead(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createContainer(XhtmlElementType::Head, parent, children);   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Body (styleable container) node
        ///
        /// Prefer the factory method in cases where the Body (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Body (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlStyleableContainerElement> createBody(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Body (styleable container) node
        ///
        /// Prefer the factory method in cases where the Body (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Body (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlStyleableContainerElement> createBody(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Body (styleable container) node
        ///
        /// Prefer the factory method in cases where the Body (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child       The optional child to register
        ///
        /// @return The new Body (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlStyleableContainerElement> createBody(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Body (styleable container) node
        ///
        /// Prefer the factory method in cases where the Body (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param children    The collection of children to register
        ///
        /// @return The new Body (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlStyleableContainerElement> createBody(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children);

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H1 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H1 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new H1 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH1(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::H1, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H1 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H1 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new H1 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH1(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::H1, parent, children);   }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H1 (styleable container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the H1 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new H1 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH1(XhtmlElement::Ptr parent, const String& text)
        {   return createStyleableContainer(XhtmlElementType::H1, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H2 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H2 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new H2 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH2(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::H2, parent, child);   }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H2 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H2 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new H2 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH2(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::H2, parent, children);   }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H2 (styleable container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the H2 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new H2 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH2(XhtmlElement::Ptr parent, const String& text)
        {   return createStyleableContainer(XhtmlElementType::H2, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H3 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H3 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new H3 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH3(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::H3, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H3 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H3 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new H3 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH3(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::H3, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H3 (styleable container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the H3 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new H3 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH3(XhtmlElement::Ptr parent, const String& text)
        {   return createStyleableContainer(XhtmlElementType::H3, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H4 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H4 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new H4 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH4(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::H4, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H4 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H4 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new H4 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH4(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::H4, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H4 (styleable container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the H4 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new H4 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH4(XhtmlElement::Ptr parent, const String& text)
        {   return createStyleableContainer(XhtmlElementType::H4, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H5 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H5 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new H5 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH5(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::H5, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H5 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H5 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new H5 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH5(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::H5, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H5 (styleable container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the H5 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new H5 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH5(XhtmlElement::Ptr parent, const String& text)
        {   return createStyleableContainer(XhtmlElementType::H5, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H6 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H6 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new H6 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH6(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::H6, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H6 (styleable container) node
        ///
        /// Prefer the factory method in cases where the H6 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new H6 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH6(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::H6, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new H6 (styleable styleable container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the H6 (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new H6 (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createH6(XhtmlElement::Ptr parent, const String& text)
        {   return createStyleableContainer(XhtmlElementType::H6, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new EM (container) node
        ///
        /// Prefer the factory method in cases where the EM (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new EM (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createEmphasized(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createContainer(XhtmlElementType::Emphasized, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new EM (container) node
        ///
        /// Prefer the factory method in cases where the EM (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new EM (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createEmphasized(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createContainer(XhtmlElementType::Emphasized, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new EM (container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the EM (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new EM (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createEmphasized(XhtmlElement::Ptr parent, const String& text)
        {   return createContainer(XhtmlElementType::Emphasized, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new I (container) node
        ///
        /// Prefer the factory method in cases where the I (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new I (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createItalic(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createContainer(XhtmlElementType::Italic, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new I (container) node
        ///
        /// Prefer the factory method in cases where the I (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new I (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createItalic(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createContainer(XhtmlElementType::Italic, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new I (container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the I (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new I (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createItalic(XhtmlElement::Ptr parent, const String& text)
        {   return createContainer(XhtmlElementType::Italic, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Strong (container) node
        ///
        /// Prefer the factory method in cases where the Strong (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Strong (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createStrong(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createContainer(XhtmlElementType::Strong, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Strong (container) node
        ///
        /// Prefer the factory method in cases where the Strong (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Strong (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createStrong(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createContainer(XhtmlElementType::Strong, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Strong (container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the Strong (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new Strong (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createStrong(XhtmlElement::Ptr parent, const String& text)
        {   return createContainer(XhtmlElementType::Strong, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Bold (container) node
        ///
        /// Prefer the factory method in cases where the Bold (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Bold (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createBold(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createContainer(XhtmlElementType::Bold, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Bold (container) node
        ///
        /// Prefer the factory method in cases where the Bold (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Bold (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createBold(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createContainer(XhtmlElementType::Bold, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Bold (container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the Bold (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new Bold (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createBold(XhtmlElement::Ptr parent, const String& text)
        {   return createContainer(XhtmlElementType::Bold, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Underline/Misspelled (container) node
        ///
        /// Prefer the factory method in cases where the Underline/Misspelled (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Underline/Misspelled (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createUnderline(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createContainer(XhtmlElementType::Underline, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Underline/Misspelled (container) node
        ///
        /// Prefer the factory method in cases where the Underline/Misspelled (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Underline/Misspelled (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createUnderline(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createContainer(XhtmlElementType::Underline, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Underline/Misspelled (container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the Underline/Misspelled (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new Underline/Misspelled (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createUnderline(XhtmlElement::Ptr parent, const String& text)
        {   return createContainer(XhtmlElementType::Underline, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Superscript (container) node
        ///
        /// Prefer the factory method in cases where the Superscript (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Superscript (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createSuperscript(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createContainer(XhtmlElementType::Superscript, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Superscript (container) node
        ///
        /// Prefer the factory method in cases where the Superscript (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Superscript (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createSuperscript(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createContainer(XhtmlElementType::Superscript, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Superscript (container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the Superscript (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new Superscript (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createSuperscript(XhtmlElement::Ptr parent, const String& text)
        {   return createContainer(XhtmlElementType::Superscript, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Subscript (container) node
        ///
        /// Prefer the factory method in cases where the Subscript (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Subscript (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createSubscript(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createContainer(XhtmlElementType::Subscript, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Subscript (container) node
        ///
        /// Prefer the factory method in cases where the Subscript (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Subscript (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createSubscript(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createContainer(XhtmlElementType::Subscript, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Subscript (container) node with foreground color initialization
        ///
        /// Prefer the factory method in cases where the Subscript (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param text    The text to apply
        ///
        /// @return The new Subscript (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlContainerElement> createSubscript(XhtmlElement::Ptr parent, const String& text)
        {   return createContainer(XhtmlElementType::Subscript, parent, std::dynamic_pointer_cast<XhtmlElement>(std::make_shared<XhtmlInnerText>(text)));   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new unordered List (styleable container) node
        ///
        /// Prefer the factory method in cases where the unordered List (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new unordered List (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createUnorderedList(XhtmlElement::Ptr parent, const XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::UnorderedList, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new unordered List (styleable container) node
        ///
        /// Prefer the factory method in cases where the unordered List (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new unordered List (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createUnorderedList(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::UnorderedList, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new unordered List (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the unordered List (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child       The optional child to register
        ///
        /// @return The new unordered List (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createUnorderedList(XhtmlElement::Ptr parent, const XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::UnorderedList, parent, styleEntry, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new unordered List (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the unordered List (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param children    The collection of children to register
        ///
        /// @return The new unordered List (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createUnorderedList(XhtmlElement::Ptr parent, const XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::UnorderedList, parent, styleEntry, children);   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new ordered List (styleable container) node
        ///
        /// Prefer the factory method in cases where the ordered List (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new ordered List (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createOrderedList(XhtmlElement::Ptr parent, const XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::OrderedList, parent, child);   }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new ordered List (styleable container) node
        ///
        /// Prefer the factory method in cases where the ordered List (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new ordered List (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createOrderedList(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::OrderedList, parent, children);   }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new ordered List (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the ordered List (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child       The optional child to register
        ///
        /// @return The new ordered List (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createOrderedList(XhtmlElement::Ptr parent, const XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::OrderedList, parent, styleEntry, child);   }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new ordered List (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the ordered List (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param children    The collection of children to register
        ///
        /// @return The new ordered List (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createOrderedList(XhtmlElement::Ptr parent, const XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::OrderedList, parent, styleEntry, children);   }


        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new List item (container) node
        ///
        /// Prefer the factory method in cases where the List item (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new List item (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlListItem> createListItem(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new List item (container) node
        ///
        /// Prefer the factory method in cases where the List item (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new List item (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlListItem> createListItem(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new List item (container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the List item (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child       The optional child to register
        ///
        /// @return The new List item (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlListItem> createListItem(XhtmlElement::Ptr parent, const XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new List item (container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the List item (container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param children    The collection of children to register
        ///
        /// @return The new List item (container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlListItem> createListItem(XhtmlElement::Ptr parent, const XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children);

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Table (styleable container) node
        ///
        /// Prefer the factory method in cases where the Table (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Table (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createTable(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Table, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Table (styleable container) node
        ///
        /// Prefer the factory method in cases where the Table (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param children    The collection of children to register
        ///
        /// @return The new Table (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createTable(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Table, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Table (styleable container) node
        ///
        /// Prefer the factory method in cases where the Table (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child   The optional child to register
        ///
        /// @return The new Table (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createTable(XhtmlElement::Ptr parent, const XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Table, parent, styleEntry, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Table (styleable container) node
        ///
        /// Prefer the factory method in cases where the Table (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param children    The collection of children to register
        ///
        /// @return The new Table (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createTable(XhtmlElement::Ptr parent, const XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Table, parent, styleEntry, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Table Head (styleable container) node
        ///
        /// Prefer the factory method in cases where the Table Head (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Table Head (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createTableHead(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::TableHead, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Table Body (styleable container) node
        ///
        /// Prefer the factory method in cases where the Table Body (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Table Body (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createTableBody(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::TableBody, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Table Foot (styleable container) node
        ///
        /// Prefer the factory method in cases where the Table Foot (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Table Foot (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createTableFoot(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::TableFoot, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Table Row (styleable container) node
        ///
        /// Prefer the factory method in cases where the Table Row (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Table Row (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createTableRow(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::TableRow, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Table Header Cell (styleable container) node
        ///
        /// Prefer the factory method in cases where the Table Header Cell (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Table Header Cell (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createTableHeaderCell(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::TableHeaderCell, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Table Data Cell (styleable container) node
        ///
        /// Prefer the factory method in cases where the Table Data Cell (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Table Data Cell (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createTableDataCell(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::TableDataCell, parent, child);   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Span (styleable container) node
        ///
        /// Prefer the factory method in cases where the Span (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Span (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createSpan(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Span, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Span (styleable container) node
        ///
        /// Prefer the factory method in cases where the Span (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Span (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createSpan(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Span, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Span (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the Span (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child       The optional child to register
        ///
        /// @return The new Span (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createSpan(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Span, parent, styleEntry, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Span (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the Span (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param children    The collection of children to register
        ///
        /// @return The new Span (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createSpan(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Span, parent, styleEntry, children);   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Division (styleable container) node
        ///
        /// Prefer the factory method in cases where the Division (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Division (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createDivision(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Division, parent, child);   }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Division (styleable container) node
        ///
        /// Prefer the factory method in cases where the Division (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Division (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createDivision(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Division, parent, children);   }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Division (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the Division (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child       The optional child to register
        ///
        /// @return The new Division (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createDivision(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Division, parent, styleEntry, child);   }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Division (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the Division (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param children    The collection of children to register
        ///
        /// @return The new Division (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createDivision(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Division, parent, styleEntry, children);   }


        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Preformatted (styleable container) node
        ///
        /// Prefer the factory method in cases where the Preformatted (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Preformatted (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createPreformatted(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Preformatted, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Preformatted (styleable container) node
        ///
        /// Prefer the factory method in cases where the Preformatted (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Preformatted (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createPreformatted(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Preformatted, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Preformatted (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the Preformatted (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child       The optional child to register
        ///
        /// @return The new Preformatted (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createPreformatted(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Preformatted, parent, styleEntry, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Preformatted (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the Preformatted (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style to register
        /// @param children    The collection of children to register
        ///
        /// @return The new Preformatted (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createPreformatted(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Preformatted, parent, styleEntry, children);   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Code (styleable container) node
        ///
        /// Prefer the factory method in cases where the Code (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Code (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createCode(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Code, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Code (styleable container) node
        ///
        /// Prefer the factory method in cases where the Code (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Code (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createCode(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Code, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Code (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the Code (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child       The optional child to register
        ///
        /// @return The new Code (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createCode(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Code, parent, styleEntry, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Code (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the Code (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param children    The collection of children to register
        ///
        /// @return The new Code (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createCode(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Code, parent, styleEntry, children);   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Paragraph (styleable container) node
        ///
        /// Prefer the factory method in cases where the Paragraph (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param child   The optional child to register
        ///
        /// @return The new Paragraph (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createParagraph(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Paragraph, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Paragraph (styleable container) node
        ///
        /// Prefer the factory method in cases where the Paragraph (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent    The parent to register. Can be nullptr
        /// @param children  The collection of children to register
        ///
        /// @return The new Paragraph (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createParagraph(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Paragraph, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Paragraph (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the Paragraph (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child       The optional child to register
        ///
        /// @return The new Paragraph (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createParagraph(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Paragraph, parent, styleEntry, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Paragraph (styleable container) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the Paragraph (styleable container) node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param children    The collection of children to register
        ///
        /// @return The new Paragraph (styleable container) node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createParagraph(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Paragraph, parent, styleEntry, children);   }

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Anchor (styleable container) node
        ///
        /// Prefer the factory method in cases where the Image node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        /// @param child       The optional child to register
        ///
        /// @param parent  The parent to register. Can be nullptr
        ///
        /// @return The new Anchor node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createAnchor(XhtmlElement::Ptr parent, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Anchor, parent, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Anchor (styleable container) node
        ///
        /// Prefer the factory method in cases where the Image node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param children    The collection of children to register
        ///
        /// @return The new Anchor node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createAnchor(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Anchor, parent, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Anchor (styleable container) node
        ///
        /// Prefer the factory method in cases where the Image node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param child       The optional child to register
        ///
        /// @return The new Anchor node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createAnchor(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, XhtmlElement::Ptr child = nullptr)
        {   return createStyleableContainer(XhtmlElementType::Anchor, parent, styleEntry, child);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Anchor (styleable container) node
        ///
        /// Prefer the factory method in cases where the Image node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        /// @param children    The collection of children to register
        ///
        /// @return The new Anchor node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline std::shared_ptr<XhtmlStyleableContainerElement> createAnchor(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry, const std::vector<XhtmlElement::Ptr> children)
        {   return createStyleableContainer(XhtmlElementType::Anchor, parent, styleEntry, children);   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Image (styleable) node
        ///
        /// Prefer the factory method in cases where the Image node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent  The parent to register. Can be nullptr
        ///
        /// @return The new Image node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlStyleableNoncontainerElement> createImage(XhtmlElement::Ptr parent);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new Image (styleable) node with style entry initialization
        ///
        /// Prefer the factory method in cases where the Image node needs to be shared, otherwise prefer the constructor.
        /// Also prefer the factory method in cases where mutual references between owner and owned are required, bacause
        /// sing shared_from_this() without previous call to make_shared() (like in a constructor) leads to undefined results.
        ///
        /// @param parent      The parent to register. Can be nullptr
        /// @param styleEntry  The style entry to register
        ///
        /// @return The new Image node
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static std::shared_ptr<XhtmlStyleableNoncontainerElement> createImage(XhtmlElement::Ptr parent, XhtmlStyleEntry::Ptr styleEntry);

        //-----------------------------------------------------------------------------------------------------------------------

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Determines whether the element is based on an empty by definition tag
        ///
        /// @return The flag indicating whether the element is based on an empty by definition tag
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        bool isAutoClosedTagByDefinition();

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Determines whether the element is an empty element (has no closing tag)
        ///
        /// @return The flag indicating whether the element is an empty element (has no closing tag)
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual bool isAutoClosed() const
        {   return m_elementType.IsAutoClosed;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the type name of the element
        ///
        /// @return The type name of the element
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline const char* getTypeName() const
        {   return m_elementType.TypeName;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the class name of the element
        ///
        /// @return The class name of the element
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        const tgui::String& getClassNames() const;

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the type name of the element as wide character string
        ///
        /// @return The type name of the element as wide character string
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline tgui::String getTypeNameU32() const
        {   return m_elementType.TypeName;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Determines whether the element can contain child elements
        ///
        /// @return The flag indicating whether the element can contain child elements
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline bool isContainer() const
        {   return m_elementType.IsContainer;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Determines whether the element is a structuring block
        ///
        /// This specifies the global document structure (creates document sections with linebreak/ carriage return behavior)
        ///
        /// @return The flag indicating whether the element is a structuring block (specifies the global document structure)
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline bool isStructuringBlock() const
        { return m_elementType.IsStructuringBlock; }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Determines whether the element is a text block
        ///
        /// This specifies the local document structure (creates paragraphs with linebreak/ carriage return behavior)
        ///
        /// @return The flag indicating whether the element can contain child elements (specifies the local document structure)
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline bool isTextBlock() const
        {   return m_elementType.IsTextBlock;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Determines whether the element supports styling
        ///
        /// @return The flag indicating whether the element supports styling
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual inline bool isstyleable() const
        {   return m_elementType.IsStyleable; }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the element's collection of attributes. Can be empty
        ///
        /// @return The element's collection of attributes. Can be empty
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline std::shared_ptr<std::vector<XhtmlAttribute::Ptr>> getAttributes() const
        {   return m_attributes;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Adds one attribute to the element's collection of attributes
        ///
        /// @param attribute  The attribute to add to the element's collection of attributes
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline void addAttribute(XhtmlAttribute::Ptr attribute)
        {
            auto styleEntry = investigateStyleEntry();
            if (attribute->getName().equalIgnoreCase(XhtmlStyleEntry::TypeName) && styleEntry)
                styleEntry->mergeWith(std::dynamic_pointer_cast<XhtmlStyleEntry>(attribute));
            else
                return m_attributes->push_back(attribute);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Adds one attribute to the element's collection of attributes
        ///
        /// @param attributes  The collection of attributes to add to the element's collection of attributes
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline void addAttributes(const std::vector<XhtmlAttribute::Ptr>& attributes)
        {
            auto styleEntry = investigateStyleEntry();
            for (size_t index = 0; index < attributes.size(); index++)
            {
                if (attributes[index]->getName().equalIgnoreCase(XhtmlStyleEntry::TypeName) && styleEntry)
                    styleEntry->mergeWith(std::dynamic_pointer_cast<XhtmlStyleEntry>(attributes[index]));
                else
                    m_attributes->push_back(attributes[index]);
            }
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the indicated attribute
        ///
        /// @param attributes  The zero-based index of the attribute to get
        ///
        /// @return The indicated attribute on success, or nullptr otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline XhtmlAttribute::Ptr getAttribute(size_t index) const
        {   return index < m_attributes->size() ? m_attributes->at(index) : nullptr;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the indicated attribute
        ///
        /// @param name       The name of the attribute to get
        ///
        /// @return The indicated attribute on success, or nullptr otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        XhtmlAttribute::Ptr getAttribute(const tgui::String& name) const;

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the element's parent element. Can be nullptr
        ///
        /// @param parent  The parent to set
        ///
        /// @return The previously set parent
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline XhtmlElement::Ptr setParent(XhtmlElement::Ptr parent)
        {   XhtmlElement::Ptr oldParent = m_parent; m_parent = parent; return oldParent;  }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the element's parent element. Can be nullptr
        ///
        /// @return The element's parent element. Can be nullptr
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline XhtmlElement::Ptr getParent() const
        {   return m_parent;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Appends a child to the collection of parent's children and registers the parent as the child's parent
        ///
        /// @param parent  The parent element to register to the child element
        /// @param child   The child element to append to the collection of parent's children and to be set the parent
        ///
        /// @return The flag indicating the success of the add operation
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static bool addChildAndSetPatent(XhtmlElement::Ptr parent, XhtmlElement::Ptr child);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Removes the child from the collection of parent's childrenand unregisters the parent as the child's parent
        ///
        /// @param parent  The parent element to unregister from the child element
        /// @param child   The child  element to remove from the collection of parent's children and to be unset the parent
        ///
        /// @return The flag indicating the success of the remove operation
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static bool removeChildAndUnsetPatent(XhtmlElement::Ptr parent, XhtmlElement::Ptr child);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Appends the children to the collection of parent's children and registers the parent as the children's parent
        ///
        /// @param parent    The parent element to register to the child elements
        /// @param children  The child  elements to append to the collection of parent's children and to be set the parent
        ///
        /// @return The number of added children
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static int addChildrenAndSetPatent(XhtmlElement::Ptr parent, const std::vector<XhtmlElement::Ptr> children);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Determines the number of sibling from the parent's children
        ///
        /// @param element    The element to determine the previous sibling for
        ///
        /// @return The previous sibling from the parent's children on success or nullptr otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static size_t countSiblings(XhtmlElement::Ptr element, bool includePreviousSiblings = true);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Determines the previous sibling from the parent's children
        ///
        /// @param element    The element to determine the previous sibling for
        ///
        /// @return The previous sibling from the parent's children on success or nullptr otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static XhtmlElement::Ptr getPreviousSibling(XhtmlElement::Ptr element);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the element's start tag positions
        ///
        /// @return The element's start tag positions
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline void setStartTagPositions(const size_t beginPosition, const size_t endPosition)
        {
            m_startTagBeginPosition = beginPosition;
            m_startTagEndPosition = endPosition;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the element's start tag begin position
        ///
        /// @return The element's start tag begin position
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline size_t getStartTagBeginPos() const
        {   return m_startTagBeginPosition;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the element's start tag end position
        ///
        /// @return The element's start tag end position
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline size_t getStartTagEndPos() const
        {   return m_startTagEndPosition;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the element's stop tag positions
        ///
        /// @return The element's stop tag positions
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline void setStopTagPositions(const size_t beginPosition, const size_t endPosition)
        {
            m_stopTagBeginPosition = beginPosition;
            m_stopTagEndPosition = endPosition;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the element's stop tag begin position
        ///
        /// @return The element's stop tag begin position
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline size_t getStopTagBeginPos() const
        {   return m_stopTagBeginPosition;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the element's stop tag end position
        ///
        /// @return The element's stop tag end position
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline size_t getStopTagEndPos() const
        {   return m_stopTagEndPosition;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the flag indicating whether the element is parsed as auto-closed
        ///
        /// @param  The flag indicating whether the element is parsed as auto-closed
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline void setParsedAsAutoClosed(bool isParsedAsAutoClosed)
        {   m_isParsedAsAutoClosed = isParsedAsAutoClosed;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the flag indicating whether the element is parsed as auto-closed
        ///
        /// @return The flag indicating whether the element is parsed as auto-closed
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline bool getParsedAsAutoClosed() const
        {   return m_isParsedAsAutoClosed;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the number of child elements
        ///
        /// @return The number of child elements
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline size_t countChildren() const
         {   if (m_children != nullptr) return m_children->size(); else return 0;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the element's collection of children. Can be nullptr
        ///
        /// @return The element's collection of children. Can be nullptr
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        std::shared_ptr<std::vector<XhtmlElement::Ptr>> getChildren(const char* typeName = "") const;

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the indicated child element of this container
        ///
        /// @return The indicated child element of this container on success, or **nullptr* otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline XhtmlElement::Ptr getChild(size_t index)
        {   if (m_children != nullptr) return (index < m_children->size() ? m_children->at(index) : nullptr); else return nullptr;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the element's first child with the indicated type name. Can be nullptr
        ///
        /// @param typeName  The type name of the requested first child. Can be nullptr or empty to get the very first child
        ///
        /// @return The element's first child with the indicated type name on success, or nullptr otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        XhtmlElement::Ptr getFirstChild(const char* typeName) const;

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Removes a child from the collection of children
        ///
        /// @param child  The child to remove from the collection of children
        ///
        /// @return The flag indicating the success of the removal
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        bool removeChild(XhtmlElement::Ptr child);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Determines the index of the indicated child within the collection of children
        ///
        /// @param child  The child to determine the index for
        ///
        /// @return The index of the indicated child on success, or SIZE_MAX otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        size_t indexOfChild(XhtmlElement::Ptr child) const;

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates trace output to the console
        ///
        /// @param indent    The current line indent
        /// @param complete  The flag determinining whether to integrate children
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void trace(std::wstring indent, bool complete = true);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a collection XHTML attributes from raw string (on success)
        ///
        /// @param messages        The collection of generated error/warning messages
        /// @param attributes      The collection of attributes to add the created attributes to
        /// @param buffer          The raw string to parse from
        /// @param beginPosition   The offset to the parse start position within the buffer
        ///
        /// @return The number of character processes in the buffer
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static size_t createAttributesFromParseStr(std::vector<std::tuple<MessageType, tgui::String>>& messages,
            std::vector<XhtmlAttribute::Ptr>& attributes, const tgui::String& buffer, const size_t beginPosition);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates an XHTML element from raw string (on success)
        ///
        /// @param messages         The collection of generated error/warning messages
        /// @param parent           The parent XHTML element. Can be nullptr
        /// @param buffer           The raw string to parse from
        /// @param beginPosition    The offset to the parse start position within the buffer
        /// @param isOpeningTag     Determine whether element is inside opening tag
        /// @param isClosingTag     Determine whether element is inside closing tag
        /// @param isInsideScript   Determine whether element is is between '<script ...>' and '</script>'
        /// @param processedLength  The number of characters that have been parsed from the buffer
        /// @param parseInnerText   Determine whether to parse the inner text of this element
        ///
        /// @return The XHTML element on success, or nullptr otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static const XhtmlElement::Ptr createElementFromParseStr(std::vector<std::tuple<tgui::xhtml::MessageType, tgui::String>>& messages,
            XhtmlElement::Ptr parent, const tgui::String& buffer, const size_t beginPosition,
            bool& isOpeningTag, bool& isClosingTag, bool& isInsideScript, size_t& processedLength, bool parseInnerText = true);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates an XHTML element from parsed data
        ///
        /// @param messages         The collection of generated error/warning messages
        /// @param isOpeningTag     Determine whether tag parse currently is an opening tag
        /// @param isClosingTag     Determine whether tag parse currently is an closing tag
        /// @param elementOpened    Determine whether parse position within the buffer is after/within opening tag '<script ...>'
        /// @param elementClosed    Determine whether parse position within the buffer is within/after closing tag '</script>'
        /// @param typeName         The tyte name of XHTML element to parse
        /// @param parent           The parent XHTML element. Can be nullptr
        /// @param beginPosition    The offset to the parse position within the buffer, indicating the element start
        /// @param endPosition      The offset to the parse position within the buffer, indicating the element end
        /// @param attributesBuffer The collection of parsed attributes so far
        ///
        /// @return The XHTML element on success, or nullptr otherwise
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static const XhtmlElement::Ptr createElementFromParseData(std::vector<std::tuple<MessageType, tgui::String>>& messages,
            bool& isOpeningTag, bool& isClosingTag, bool elementOpened, bool elementClosed, tgui::String& typeName,
            XhtmlElement::Ptr& parent, const size_t& beginPosition, const size_t& endPosition, std::vector<XhtmlAttribute::Ptr>& attributesBuffer);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the first root element with the indicated type name. Can be nullptr
        ///
        /// @param elements  The collection of XHTML element to find the first matching element in. Can be empty
        /// @param typeName  The type name of the requested first root element
        ///
        /// @return The first XHTML element with the indicated type name. Can be nullptr
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static const XhtmlElement::Ptr getFirstElement(std::vector<XhtmlElement::Ptr> elements, const char* typeName = "");

    protected:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Investigates the style entry
        ///
        /// @return The style entry. Can be nullptr
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        XhtmlStyleEntry::Ptr investigateStyleEntry() const;

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Clean the type name of a tag
        ///
        /// @param typeName  The raw type name of a tag. Can be empty
        ///
        /// @return The cleaned type name of a tag. Can be empty
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static inline String cleanTypeName(String typeName)
        {
            auto result = typeName.trim();
            result.remove(U'\n');
            result.replace(U'\r', U' ');
            result.replace(U'\t', U' ');
            result.replace(U'\v', U' ');

            return result;
        }

    protected:
        XhtmlElementType                                  m_elementType;           //!< The associated XHTML element type
        XhtmlElement::Ptr                                 m_parent;                //!< This element's parent element
        std::shared_ptr<std::vector<XhtmlAttribute::Ptr>> m_attributes;            //!< This element's attribute list
        std::shared_ptr<std::vector<XhtmlElement::Ptr>>   m_children;              //!< This element's child elements

    private:
        size_t                                            m_startTagBeginPosition; //!< The first character prosition of the start tag
        size_t                                            m_startTagEndPosition;   //!< The last character prosition of the start tag
        size_t                                            m_stopTagBeginPosition;  //!< The first character prosition of the end tag
        size_t                                            m_stopTagEndPosition;    //!< The last character prosition of the end tag
        bool                                              m_isParsedAsAutoClosed;
    };

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// @brief The XHTML text element
    ///
    /// This class represents inner text of any THML element, that supports inner text
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class TGUI_API XhtmlInnerText : public XhtmlElement
    {
    public:
        using Ptr = std::shared_ptr<XhtmlInnerText>; //!< Shared inner text element (base implementation) pointer
        using ConstPtr = std::shared_ptr<const XhtmlInnerText>; //!< Shared constant inner text element (base implementation) pointer

    public:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief The default constructor
        ///
        /// ATTENTION: To register a parent and to register this new object to a parent are the responsibilities of the caller!
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        XhtmlInnerText()
            : XhtmlElement(XhtmlElementType::Text), m_text()
        {   ;   }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief The initializing constructor
        ///
        /// ATTENTION: To register a parent and to register this new object to a parent are the responsibilities of the caller!
        ///
        /// @param text    The text to apply
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        XhtmlInnerText(String text)
            : XhtmlElement(XhtmlElementType::Text), m_text(L"")
        {   setText(text);   }

    public:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief The virtual default destructor
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual ~XhtmlInnerText()
        {   ;   }


    public:
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Sets the text of this element
        ///
        /// @param text  The new text to set
        /// @param decode  The flag, determining whether to encode the text, default is true
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline void setText(tgui::String text, bool decode = true) { m_text = (decode ? XhtmlElement::decode(text) : text); }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Gets the text of the element
        ///
        /// @return The text of the element. The text will typically be decoded. To get encoded text use XhtmlHelper.encode()
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        inline tgui::String getText() { return m_text; }

    private:
        tgui::String m_text;
    };

} }

#endif // TGUI_XHTML_ELEMENT_HPP
