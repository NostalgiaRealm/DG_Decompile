/*
 * FUN_10035520 at 10035520
 * undefined FUN_10035520(void)
 * Address ranges: 10035520-10035667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035520(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  undefined1 auStack_4c [12];
  
  if (*(char *)(DAT_100be0c0 + 0x7e6) != '\0') {
    iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
    if (iVar2 == 0) {
      FUN_10001c10(0);
    }
    FUN_100a9d50(auStack_4c);
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar4 = 0;
    if (*(uint *)(param_1 + 0x11c) != 0) {
      do {
        uVar3 = (*pcVar1)();
        iVar2 = (*extraout_w11)(uVar3);
        if (((*(uint *)(iVar2 + 0x68) & 0x4000800) == 0) &&
           ((*(uint *)(iVar2 + 0x6c) & 0x20010) == 0)) {
          FUN_1004f858(*(undefined4 *)(*(int *)(param_1 + 0x118) + uVar4 * 4));
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x11c));
    }
    *(undefined1 *)(param_1 + 0xf9) = 1;
    FUN_100a9ca0(auStack_4c);
    (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  }
  return;
}

