/*
 * FUN_18002c964 at 18002c964
 * undefined FUN_18002c964(void)
 * Address ranges: 18002c964-18002cb2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002c964(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong unaff_x19;
  longlong unaff_x20;
  longlong unaff_x22;
  int unaff_w23;
  longlong unaff_x24;
  int unaff_w27;
  int unaff_w28;
  uint in_stack_00000010;
  longlong in_stack_00000018;
  
  if (((((*(char *)(unaff_x19 + 0x7662) == '\0') || (unaff_w23 != *(int *)(unaff_x19 + 0x7640))) ||
       (unaff_w27 != *(int *)(in_stack_00000018 + 0x3644))) ||
      ((unaff_w28 != *(int *)(in_stack_00000018 + 0x3648) ||
       (unaff_x22 != *(longlong *)(unaff_x19 + 0xf9a8))))) ||
     ((uint)((0x1000 - *(int *)(unaff_x19 + 0x74)) - *(int *)(unaff_x19 + 0x70)) < in_stack_00000010
     )) {
    FUN_18002a810();
    if (((*(char *)(unaff_x19 + 0x7662) == '\0') || (unaff_w23 != *(int *)(unaff_x19 + 0x7640))) ||
       ((unaff_x22 != *(longlong *)(unaff_x19 + 0xf9a8) ||
        ((*(int *)(unaff_x19 + 0xfe8) != 0x14 ||
         (*(int *)(unaff_x19 + 0x102c) != *(int *)(unaff_x19 + 0x7c))))))) {
      *(int *)(unaff_x19 + 0x7640) = unaff_w23;
      if (*(char *)(unaff_x19 + 0x7662) == '\0') {
        *(undefined1 *)(unaff_x24 + 0x68e) = 1;
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
      if ((unaff_x22 != 0) && (unaff_x22 != *(longlong *)(unaff_x19 + 0xf9a8))) {
        *(undefined1 *)(unaff_x24 + 0x689) = 1;
        *(byte *)(unaff_x24 + 0x684) = *(byte *)(unaff_x24 + 0x684) | 1;
      }
      lVar2 = *(longlong *)(unaff_x20 + 0x76e0);
      *(longlong *)(unaff_x19 + 0xf9a8) = unaff_x22;
      *(undefined8 *)(unaff_x20 + 0x7cb8) = *(undefined8 *)(lVar2 + 0x228);
      uVar1 = *(undefined8 *)(lVar2 + 0x230);
      *(undefined8 *)(unaff_x20 + 0x7cd0) = 0;
      *(undefined1 *)(unaff_x24 + 0x688) = 1;
      *(undefined8 *)(unaff_x20 + 0x7cc0) = uVar1;
      *(undefined4 *)(unaff_x19 + 0xfd80) = 4;
      *(undefined1 *)(unaff_x19 + 0x10588) = 1;
      *(undefined1 *)(unaff_x19 + 0x7668) = 0;
      if (*(char *)(unaff_x19 + 0x7662) == '\0') {
        *(undefined1 *)(unaff_x19 + 0x7662) = 1;
        FUN_180054430();
      }
    }
  }
  FUN_180058818();
  return;
}

