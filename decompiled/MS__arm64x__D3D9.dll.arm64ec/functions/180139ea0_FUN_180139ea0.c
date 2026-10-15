/*
 * FUN_180139ea0 at 180139ea0
 * undefined FUN_180139ea0(void)
 * Address ranges: 180139ea0-18013a067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180139ea0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong unaff_x19;
  longlong unaff_x20;
  longlong unaff_x25;
  int unaff_w26;
  longlong unaff_x27;
  int iStack0000000000000010;
  int iStack0000000000000014;
  uint in_stack_00000018;
  longlong in_stack_00000020;
  
  if (((((*(char *)(unaff_x19 + 0x7662) == '\0') || (unaff_w26 != *(int *)(unaff_x19 + 0x7640))) ||
       (iStack0000000000000010 != *(int *)(in_stack_00000020 + 0x3644))) ||
      ((iStack0000000000000014 != *(int *)(in_stack_00000020 + 0x3648) ||
       (unaff_x25 != *(longlong *)(unaff_x19 + 0xf9a8))))) ||
     ((uint)((0x1000 - *(int *)(unaff_x19 + 0x74)) - *(int *)(unaff_x19 + 0x70)) < in_stack_00000018
     )) {
    FUN_180137af0();
    if (((*(char *)(unaff_x19 + 0x7662) == '\0') || (unaff_w26 != *(int *)(unaff_x19 + 0x7640))) ||
       ((unaff_x25 != *(longlong *)(unaff_x19 + 0xf9a8) ||
        ((*(int *)(unaff_x19 + 0xfe8) != 0x14 ||
         (*(int *)(unaff_x19 + 0x102c) != *(int *)(unaff_x19 + 0x7c))))))) {
      *(int *)(unaff_x19 + 0x7640) = unaff_w26;
      if (*(char *)(unaff_x19 + 0x7662) == '\0') {
        *(undefined1 *)(unaff_x27 + 0x68e) = 1;
      }
      if (*(longlong *)(unaff_x20 + 0x7cd8) != *(longlong *)(unaff_x20 + 0x7718)) {
        *(longlong *)(unaff_x20 + 0x7cd8) = *(longlong *)(unaff_x20 + 0x7718);
        *(undefined1 *)(unaff_x19 + 0xf68f) = 1;
      }
      if (*(int *)(unaff_x19 + 0xfe8) != 0x14) {
        *(undefined4 *)(unaff_x19 + 0xfe8) = 0x14;
        *(undefined1 *)(unaff_x19 + 0xf68f) = 1;
      }
      if (*(int *)(unaff_x19 + 0x102c) != *(int *)(unaff_x19 + 0x7c)) {
        *(int *)(unaff_x19 + 0x102c) = *(int *)(unaff_x19 + 0x7c);
        *(undefined1 *)(unaff_x19 + 0xf68f) = 1;
      }
      if ((unaff_x25 != 0) && (unaff_x25 != *(longlong *)(unaff_x19 + 0xf9a8))) {
        *(undefined1 *)(unaff_x27 + 0x689) = 1;
        *(byte *)(unaff_x27 + 0x684) = *(byte *)(unaff_x27 + 0x684) | 1;
      }
      lVar2 = *(longlong *)(unaff_x20 + 0x76e0);
      *(longlong *)(unaff_x19 + 0xf9a8) = unaff_x25;
      *(undefined8 *)(unaff_x20 + 0x7cb8) = *(undefined8 *)(lVar2 + 0x228);
      uVar1 = *(undefined8 *)(lVar2 + 0x230);
      *(undefined8 *)(unaff_x20 + 0x7cd0) = 0;
      *(undefined1 *)(unaff_x27 + 0x688) = 1;
      *(undefined8 *)(unaff_x20 + 0x7cc0) = uVar1;
      *(undefined4 *)(unaff_x19 + 0xfd80) = 4;
      *(undefined1 *)(unaff_x19 + 0x10588) = 1;
      *(undefined1 *)(unaff_x19 + 0x7668) = 0;
      if (*(char *)(unaff_x19 + 0x7662) == '\0') {
        *(undefined1 *)(unaff_x19 + 0x7662) = 1;
        FUN_180164290();
      }
    }
  }
  FUN_180168a00();
  return;
}

