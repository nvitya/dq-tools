/* Synthetic CMSIS header covering the Python translator's supported syntax. */
#define FLAG 1UL
#define FLAG 2
#define SHIFT ((uint32_t) (FLAG << 4U))
#define MULTILINE (FLAG | \
                  SHIFT)
#define OPERATORS (FLAG && SHIFT || FLAG != SHIFT)
#define BITS (~FLAG & SHIFT ^ FLAG)
#define MATH (SHIFT / 2U % 3U)
#define COMPARE (FLAG == SHIFT | FLAG <= SHIFT | FLAG >= SHIFT | SHIFT >> 1)
#define UNKNOWN MISSING
#define FORWARD LATER
#define LATER 3U
#define FUNCTION(x) (x)
#define BARE_FUNCTION(x)
#define HEADER_GUARD
#define INITIALIZER {1, 2}
#define NEGATED !FLAG
#define INTEGER ((uint16_t) 9U)
#define HEX (0x12UL)
#define UPPERCASE_HEX (0X12)
#define DUPLICATE_HEX (0x0x12)
#define EMPTY_COMMENT /* no value */

typedef enum {
    IRQ_Reset = -1, /*!< Reset interrupt */
    IRQ_Timer = 2L, /* Timer interrupt */
    IRQ_Alias = IRQ_Timer,
    IRQ_Logic = (FLAG && IRQ_Timer),
    IRQ_NotReset = !RESET,
    IRQ_NotDisable = !DISABLE,
    IRQ_NotSuccess = !SUCCESS,
    IRQ_Unknown = MISSING,
    IRQ_Implicit,
    IRQ_Forbidden = !FLAG,
    IRQ_Alias = 99,
} IRQn_Type;

typedef struct {
    __IO uint32_t CTRL; /*!< Control register */
    __I uint32_t STATUS; /* Status register */
    __O uint16_t DATA[2U]; /* Output register */
    __IOM uint32_t IOM;
    __IM uint32_t IM;
    __OM uint32_t OM;
    volatile const uint8_t RO;
    volatile uint64_t RW;
    uint32_t RESERVED[(SHIFT / 2U)];
    uint8_t EMPTY; /**/
    RwReg32 ATSAM;
    RoReg8 BYTE;
    WoReg16 HALFWORD;
    Reg64 WIDE;
    RwReg REG;
    RSSLIB_word SPECIAL;
    struct {
        uint32_t FIRST;
        union {
            uint32_t INNER;
            uint16_t SMALL[2];
        };
    } GROUP[2U];
    struct {
        int32_t SIGNED;
    };
    union {
        uint32_t WORD;
        uint8_t BYTES[4U];
    };
    union {
        uint32_t NAMED_WORD;
        uint16_t NAMED_HALVES[2];
    } NAMED;
    union {
    };
    void (*CALLBACK)(void);
} Device_t;

struct Named_t {
    uint32_t VALUE;
};

typedef union {
    uint32_t WORD;
    uint8_t BYTES[4];
} Word_t;

union NamedUnion_t {
    int32_t SIGNED;
    uint32_t UNSIGNED;
};

#define DEVICE_BASE (0x40000000UL)
#define DEVICE ((Device_t *) DEVICE_BASE)
#define DEVICE ((Device_t *) 0)
#define DEVICE_ALIAS DEVICE
