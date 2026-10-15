/*
 * FUN_18014e620 at 18014e620
 * undefined FUN_18014e620(void)
 * Address ranges: 18014e620-18014e817
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18014e620(longlong param_1,uint param_2,int param_3,int param_4,int param_5,
                  longlong param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (((((*(char *)(param_1 + 0x7662) == '\0') || (param_3 != *(int *)(param_1 + 0x7640))) ||
       (param_4 != *(int *)(param_1 + 0x7644))) ||
      ((param_5 != *(int *)(param_1 + 0x7648) || (param_6 != *(longlong *)(param_1 + 0xfcb8))))) ||
     ((uint)((0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70)) < param_2)) {
    FUN_18014e9a0(param_1,(uint)((0x1000 - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x70)) <
                          param_2,0,0x14);
    if (((*(char *)(param_1 + 0x7662) == '\0') || (param_3 != *(int *)(param_1 + 0x7640))) ||
       ((param_6 != *(longlong *)(param_1 + 0xfcb8) ||
        ((*(int *)(param_1 + 0xfe8) != 0x14 ||
         (*(int *)(param_1 + 0x102c) != *(int *)(param_1 + 0x7c))))))) {
      *(int *)(param_1 + 0x7640) = param_3;
      uVar1 = 1;
      if (*(char *)(param_1 + 0x7662) == '\0') {
        *(undefined1 *)(param_1 + 0xf68e) = 1;
      }
      if (*(longlong *)(param_1 + 0xff38) != *(longlong *)(param_1 + 0xf718)) {
        *(longlong *)(param_1 + 0xff38) = *(longlong *)(param_1 + 0xf718);
        *(undefined1 *)(param_1 + 0xf68f) = 1;
      }
      if (*(int *)(param_1 + 0xfe8) != 0x14) {
        *(undefined4 *)(param_1 + 0xfe8) = 0x14;
        *(undefined1 *)(param_1 + 0xf68f) = 1;
      }
      if (*(int *)(param_1 + 0x102c) != *(int *)(param_1 + 0x7c)) {
        *(int *)(param_1 + 0x102c) = *(int *)(param_1 + 0x7c);
        *(undefined1 *)(param_1 + 0xf68f) = 1;
      }
      if ((param_6 != 0) && (param_6 != *(longlong *)(param_1 + 0xfcb8))) {
        uVar1 = 1;
        FUN_180147330(param_1,*(undefined8 *)(param_1 + 0xfe90));
        *(undefined1 *)(param_1 + 0xf689) = uVar1;
      }
      *(longlong *)(param_1 + 0xfcb8) = param_6;
      *(undefined8 *)(param_1 + 0xf940) = *(undefined8 *)(*(longlong *)(param_1 + 0xf6f8) + 0x158);
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xf6f8) + 0x160);
      *(undefined8 *)(param_1 + 0xf910) = 0;
      *(undefined1 *)(param_1 + 0xf688) = uVar1;
      *(undefined8 *)(param_1 + 0xf8f0) = uVar2;
      *(undefined4 *)(param_1 + 0xf94c) = 3;
      *(undefined4 *)(param_1 + 0xffc4) = 4;
      *(undefined1 *)(param_1 + 0x7668) = 0;
      if (*(char *)(param_1 + 0x7662) == '\0') {
        *(undefined1 *)(param_1 + 0x7662) = uVar1;
        FUN_180164290(param_1);
      }
      *(undefined1 *)(param_1 + 0x1018a) = uVar1;
      *(undefined2 *)(param_1 + 0x10188) = 0x101;
    }
  }
  return;
}

