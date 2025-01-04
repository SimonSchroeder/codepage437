#ifndef CODEPAGE437_H
#define CODEPAGE437_H

#include <string_view>

const std::u8string_view cp437_map[256] =
{
    // 0x00--0x0F
    u8"\0", // NULL
    u8"\u263A", // ☺ -- smiley             WHITE_SMILING_FACE
    u8"\u263B", // ☻ -- filled smiley      BLACK_SMILING_FACE
    u8"\u2665", // ♥ -- heart              BLACK_HEART_SUIT
    u8"\u2666", // ♦ -- diamond            BLACK_DIAMOND_SUIT
    u8"\u2663", // ♣ -- club               BLACK_CLUB_SUIT
    u8"\u2660", // ♠ -- spade              BLACK_SPADE_SUIT
    u8"\u2022", // • -- dot                BULLET
    u8"\u25D8", // ◘ -- dot in square      INVERSE_BULLET
    u8"\u25CB", // ○ -- circle             WHITE_CIRCLE
    u8"\u25D9", // ◙ -- circle in square   INVERSE_WHITE_CIRCLE
    u8"\u2642", // ♂ -- male               MALE_SIGN
    u8"\u2640", // ♀ -- female             FEMALE_SIGN
    u8"\u266A", // ♪ -- single note        EIGTH_NOTE
    u8"\u266B", // ♫ -- double note        BEAMED_EIGHT_NOTE
    u8"\u263C", // ☼ -- sun                WHITE_SUN_WITH_RAYS

    // 0x10--0x1F
    u8"\u25BA", // ► --                     BLACK_RIGHT_POINTING_POINTER
    u8"\u25C4", // ◄ --                     BLACK_LEFT_POINTING_POINTER
    u8"\u2195", // ↕ --                     UP_DOWN_ARROW
    u8"\u203C", // ‼ --                     DOUBLE_EXCLAMATION_MARK
    u8"\u00B6", // ¶ --                     PILCROW SIGN
    u8"\u00A7", // § -- paragraph           SECTION_SIGN
    u8"\u25AC", // ▬ --                     BLACK_RECTANGLE
    u8"\u21A8", // ↨ --                     UP_DOWN_ARROW_WITH_BASE
    u8"\u2191", // ↑ -- up arrow            UPWARDS_ARROW
    u8"\u2193", // ↓ -- down arrow          DOWNWARDS_ARROW
    u8"\u2192", // → -- right arrow         RIGHTWARDS_ARROW
    u8"\u2190", // ← -- left arrow          LEFTWARDS_ARROW
    u8"\u221F", // ∟ --                     RIGHT_ANGLE
    u8"\u2194", // ↔ --                     LEFT_RIGHT_ARROW
    u8"\u25B2", // ▲ --                     BLACK_UP-POINTING_TRIANGLE
    u8"\u25BC", // ▼ --                     BLACK_DOWN-POINTING_TRIANGLE

    // 0x20--0x2F
    u8" ",
    u8"!",
    u8"\"",
    u8"#",
    u8"$",
    u8"%",
    u8"&",
    u8"'",
    u8"(",
    u8")",
    u8"*",
    u8"+",
    u8",",
    u8"-",
    u8".",
    u8"/",

    // 0x30--0x3F
    u8"0",
    u8"1",
    u8"2",
    u8"3",
    u8"4",
    u8"5",
    u8"6",
    u8"7",
    u8"8",
    u8"9",
    u8":",
    u8";",
    u8"<",
    u8"=",
    u8">",
    u8"?",

    // 0x40--0x4F
    u8"@",
    u8"A",
    u8"B",
    u8"C",
    u8"D",
    u8"E",
    u8"F",
    u8"G",
    u8"H",
    u8"I",
    u8"J",
    u8"K",
    u8"L",
    u8"M",
    u8"N",
    u8"O",

    // 0x50--0x5F
    u8"P",
    u8"Q",
    u8"R",
    u8"S",
    u8"T",
    u8"U",
    u8"V",
    u8"W",
    u8"X",
    u8"Y",
    u8"Z",
    u8"[",
    u8"\\",
    u8"]",
    u8"^",
    u8"_",

    // 0x60--0x6F
    u8"`",
    u8"a",
    u8"b",
    u8"c",
    u8"d",
    u8"e",
    u8"f",
    u8"g",
    u8"h",
    u8"i",
    u8"j",
    u8"k",
    u8"l",
    u8"m",
    u8"n",
    u8"o",
    
    // 0x70--0x7F
    u8"p",
    u8"q",
    u8"r",
    u8"s",
    u8"t",
    u8"u",
    u8"v",
    u8"w",
    u8"x",
    u8"y",
    u8"z",
    u8"{",
    u8"|",  // originally broken bar [U+00A6, ¦], clarified in 1990 that it is actually a bar |
    u8"}",
    u8"~",
    u8"\u2302", // ⌂ -- actually a "house" but was also sometimes used as Greek capital delta [U+0394, Δ]

    // 0x80--0x8F
    u8"\u00C7", // Ç   
    u8"\u00FC", // ü
    u8"\u00E9", // é
    u8"\u00E2", // â
    u8"\u00E4", // ä
    u8"\u00E0", // à
    u8"\u00E5", // å
    u8"\u00E7", // ç
    u8"\u00EA", // ê
    u8"\u00EB", // ë
    u8"\u00E8", // è
    u8"\u00EF", // ï
    u8"\u00EE", // î
    u8"\u00EC", // ì
    u8"\u00C4", // Ä
    u8"\u00C5", // Å

    // 0x90--0x9F
    u8"\u00C9", // É
    u8"\u00E6", // æ
    u8"\u00C6", // Æ
    u8"\u00F4", // ô
    u8"\u00F6", // ö
    u8"\u00F2", // ò
    u8"\u00FB", // û
    u8"\u00F9", // ù
    u8"\u00FF", // ÿ
    u8"\u00D6", // Ö
    u8"\u00DC", // Ü
    u8"\u00A2", // ¢ -- cents
    u8"\u00A3", // £ -- pounds
    u8"\u00A5", // ¥ -- yen
    u8"\u00A7", // ₧ -- pesetas
    u8"\u0192", // ƒ --                     LATIN_SMALL_LETTER_F_WITH_HOOK

    // 0xA0--0xAF
    u8"\u00E1", // á
    u8"\u00ED", // í
    u8"\u00F3", // ó
    u8"\u00FA", // ú
    u8"\u00F1", // ñ
    u8"\u00D1", // Ñ
    u8"\u00AA", // ª --                     FEMININE_ORIDNAL_INDICATOR
    u8"\u00BA", // º --                     MASCULINE_ORDINAL_INDICATOR
    u8"\u00BF", // ¿
    u8"\u2310", // ⌐ --                     REVERSED_NOT_SIGN
    u8"\u00AC", // ¬ --                     NOT_SIGN
    u8"\u00BD", // ½ --                     VULGAR_FRACTION_ONE_HALF
    u8"\u00BC", // ¼ --                     VULGAR_FRACTION_ONE_QUARTER
    u8"\u00A1", // ¡
    u8"\u00AB", // «
    u8"\u00BB", // »
    
    // 0xB0--0xBF
    u8"\u2591", // ░ --                     LIGHT_SHADE
    u8"\u2592", // ▒ --                     MEDIUM_SHADE
    u8"\u2593", // ▓ --                     DARK_SHADE
    u8"\u2502", // │ --                     BOX_DRAWINGS_LIGHT_VERTICAL
    u8"\u2524", // ┤ --                     BOX_DRAWINGS_LIGHT_VERTICAL_AND_LEFT
    u8"\u2561", // ╡ --                     BOX_DRAWINGS_VERTICAL_SINGLE_AND_LEFT_DOUBLE
    u8"\u2562", // ╢ --                     BOX_DRAWINGS_VERTICAL_DOUBLE_AND_LEFT_SINGLE
    u8"\u2556", // ╖ --                     BOX_DRAWINGS_DOWN_DOUBLE_AND_LEFT_SINGLE
    u8"\u2555", // ╕ --                     BOX_DRAWINGS_DOWN_SINGLE_AND_LEFT_DOUBLE
    u8"\u2563", // ╣ --                     BOX_DRAWINGS_DOUBLE_VERTICAL_AND_LEFT
    u8"\u2551", // ║ --                     BOX_DRAWINGS_DOUBLE_VERTICAL
    u8"\u2557", // ╗ --                     BOX_DRAWINGS_DOUBLE_DOWN_AND_LEFT
    u8"\u255D", // ╝ --                     BOX_DRAWINGS_DOUBLE_UP_AND_LEFT
    u8"\u255C", // ╜ --                     BOX_DRAWINGS_UP_DOUBLE_AND_LEFT_SINGLE
    u8"\u255B", // ╛ --                     BOX_DRAWINGS_UP_SINGLE_AND_LEFT_DOUBLE
    u8"\u2510", // ┐ --                     BOX_DRAWINGS_LIGHT_DOWN_AND_LEFT

    // 0xC0--0xCF
    u8"\u2514", // └ --                     BOX_DRAWINGS_LIGHT_UP_AND_RIGHT
    u8"\u2534", // ┴ --                     BOX_DRAWINGS_LIGHT_UP_AND_HORIZONTAL
    u8"\u252C", // ┬ --                     BOX_DRAWINGS_LIGHT_DOWN_AND_HORIZONTAL
    u8"\u251C", // ├ --                     BOX_DRAWINGS_LIGHT_VERTICAL_AND_RIGHT
    u8"\u2500", // ─ --                     BOX_DRAWINGS_LIGHT_HORIZONTAL
    u8"\u253C", // ┼ --                     BOX_DRAWINGS_LIGHT_VERTICAL_AND_HORIZONTAL
    u8"\u255E", // ╞ --                     BOX_DRAWINGS_VERTICAL_SINGLE_AND_RIGHT_DOUBLE
    u8"\u255F", // ╟ --                     BOX_DRAWINGS_VERTICAL_DOUBLE_AND_RIGHT_SINGLE
    u8"\u255A", // ╚ --                     BOX_DRAWINGS_DOUBLE_UP_AND_RIGHT
    u8"\u2554", // ╔ --                     BOX_DRAWINGS_DOUBLE_DOWN_AND_RIGHT
    u8"\u2569", // ╩ --                     BOX_DRAWINGS_DOUBLE_UP_AND_HORIZONTAL
    u8"\u2566", // ╦ --                     BOX_DRAWINGS_DOUBLE_DOWN_AND_HORIZONTAL
    u8"\u2560", // ╠ --                     BOX_DRAWINGS_DOUBLE_VERTICAL_AND_RIGHT
    u8"\u2550", // ═ --                     BOX_DRAWINGS_DOUBLE_HORIZONTAL
    u8"\u256C", // ╬ --                     BOX_DRAWINGS_DOUBLE_VERTICAL_AND_HORIZONTAL
    u8"\u2567", // ╧ --                     BOX_DRAWINGS_UP_SINGLE_AND_HORIZONTAL_DOUBLE

    // 0xD0--0xDF
    u8"\u2569", // ╨ --                     BOX_DRAWINGS_UP_DOUBLE_AND_HORIZONTAL_SINGLE
    u8"\u2564", // ╤ --                     BOX_DRAWINGS_DOWN_SINGLE_AND_HORIZONTAL_DOUBLE
    u8"\u2565", // ╥ --                     BOX_DRAWINGS_DOWN_DOUBLE_AND_HORIZONTAL_SINGLE
    u8"\u2559", // ╙ --                     BOX_DRAWINGS_UP_DOUBLE_AND_RIGHT_SINGLE
    u8"\u2558", // ╘ --                     BOX_DRAWINGS_UP_SINGLE_AND_RIGHT_DOUBLE
    u8"\u2552", // ╒ --                     BOX_DRAWINGS_DOWN_SINGLE_AND_RIGHT_DOUBLE
    u8"\u2553", // ╓ --                     BOX_DRAWINGS_DOWN_DOUBLE_AND_RIGHT_SINGLE
    u8"\u256B", // ╫ --                     BOX_DRAWINGS_VERTICAL_DOUBLE_AND_HORIZONTAL_SINGLE
    u8"\u256A", // ╪ --                     BOX_DRAWINGS_VERTICAL_SINGLE_AND_HORIZONTAL_DOUBLE
    u8"\u2518", // ┘ --                     BOX_DRAWINGS_LIGHT_UP_AND_LEFT
    u8"\u250C", // ┌ --                     BOX_DRAWINGS_LIGHT_DOWN_AND_RIGHT
    u8"\u2588", // █ --                     FULL_BLOCK
    u8"\u2584", // ▄ --                     LOWER_HALF_BLOCK
    u8"\u258C", // ▌ --                     LEFT_HALF_BLOCK
    u8"\u2590", // ▐ --                     RIGHT_HALF_BLOCK
    u8"\u2580", // ▀ --                     UPPER_HALF_BLOCK

    // 0xE0--0xEF
    u8"\u03B1", // α -- alpha               GREEK_SMALL_LETTER_ALPHA
    u8"\u00DF", // ß --                     LATIN_SMALL_LETTER_SHARP_S
    u8"\u0393", // Γ -- Gamma               GREEK_CAPITAL_LETTER_GAMMA
    u8"\u03C0", // π -- pi                  GREEK_SMALL_LETTER_PI
    u8"\u03A3", // Σ -- Sigma               GREEK_CAPITAL_LETTER_SIGMA
    u8"\u03C3", // σ -- sigma               GREEK_SMALL_LETTER_SIGMA
    u8"\u00B5", // µ -- mu                  GREEK_SMALL_LETTER_MU/MICRO_SIGN???
    u8"\u03C4", // τ -- tau                 GREEK_SMALL_LETTER_TAU
    u8"\u03A6", // Φ -- Phi                 GREEK_CAPITAL_LETTER_PHI
    u8"\u0398", // Θ -- Theta               GREEK_CAPITAL_LETTER_THETA
    u8"\u03A9", // Ω -- Omega               GREEK_CAPITAL_LETTER_OMEGA
    u8"\u03B4", // δ -- delta               GREEK_SMALL_LETTER_DELTA
    u8"\u221E", // ∞ -- infinity            INFINITY
    u8"\U0001D719",// 𝜙 -- italic phi       GREEK_SMALL_LETTER_PHI (use italic here as this is often used for the diameter sign)
    u8"\u03B5", // ε -- epsilon             GREEK_SMALL_LETTER_EPSILON
    u8"\u2229", // ∩ -- intersection        INTERSECTION

    // 0xF0--0xFF
    u8"\u2261", // ≡ --                     IDENTICAL_TO
    u8"\u00B1", // ±
    u8"\u2265", // ≥
    u8"\u2264", // ≤
    u8"\u2320", // ⌠ --                     TOP_HALF_INTEGRAL
    u8"\u2321", // ⌡ --                     BOTTOM_HALF_INTEGRAL
    u8"\u00F7", // ÷ --                     DIVISION_SIGN
    u8"\u2248", // ≈ --                     ALMOST_EQUAL_TO
    u8"\u00B0", // ° -- degree              DEGREE_SIGN
    u8"\u2219", // ∙ -- bullet point        BULLET_OPERATOR
    u8"\u00B7", // · -- multiplication      MIDDLE_DOT
    u8"\u221A", // √ -- root                SQUARE_ROOT
    u8"\u207F", // ⁿ --                     SUPERSCRIPT_LATIN_SMALL_LETTER_N
    u8"\u00B2", // ² -- squared             SUPERSCRIPT_TWO
    u8"\u25A0", // ■ --                     BLACK_SQUARE
    u8"\u00A0"  //   -- non-breaking space  NO-BREAK_SPACE
};

#endif // CODEPAGE437_H
