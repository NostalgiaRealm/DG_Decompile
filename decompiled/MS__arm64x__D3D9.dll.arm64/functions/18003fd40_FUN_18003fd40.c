/*
 * FUN_18003fd40 at 18003fd40
 * undefined FUN_18003fd40(void)
 * Address ranges: 18003fd40-18003fd8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003fd40(longlong param_1,byte param_2,byte param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_50 [8];
  longlong local_48;
  
  FUN_1800eef60(*(longlong *)(param_1 + 0xf718) + 0x40,auStack_50,param_2 + 1,0,0);
  lVar4 = local_48;
  if (local_48 != 0) {
    FUN_1800eef60(*(longlong *)(param_1 + 0xf710) + 0x40,auStack_50,param_3 + 1,0,0);
    if (local_48 != 0) {
      if (*(longlong *)(param_1 + 0x68) != *(longlong *)(param_1 + 0x60)) {
        *(int *)(param_1 + 0x78) =
             (int)*(longlong *)(param_1 + 0x68) - (int)*(undefined8 *)(param_1 + 0x58);
      }
      *(longlong *)(param_1 + 0x68) = lVar4;
      *(longlong *)(param_1 + 0x58) = lVar4;
      *(longlong *)(param_1 + 0x88) = local_48;
      if ((param_2 & 1) == 0) {
        iVar1 = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x70);
        uVar2 = *(uint *)(param_1 + 0x78);
        *(int *)(param_1 + 0x70) = iVar1;
        uVar3 = uVar2;
        if ((param_4 != 0) && (param_4 != *(int *)(param_1 + 0x80))) {
          uVar3 = iVar1 * param_4;
          if (uVar3 < uVar2) {
            *(uint *)(param_1 + 0x7c) = uVar2 - uVar3;
            uVar3 = uVar2;
          }
          else {
            *(undefined4 *)(param_1 + 0x7c) = 0;
          }
        }
        lVar4 = lVar4 + (ulonglong)uVar3;
        *(longlong *)(param_1 + 0x68) = lVar4;
      }
      else {
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      if (param_4 != 0) {
        *(int *)(param_1 + 0x80) = param_4;
      }
      *(longlong *)(param_1 + 0x60) = lVar4;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if ((param_3 & 1) == 0) {
        uVar2 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = uVar2;
        *(ulonglong *)(param_1 + 0x88) = local_48 + (ulonglong)uVar2 * 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x90) = 0;
      }
      *(undefined4 *)(param_1 + 0x94) = 0;
      return 1;
    }
    if (*(int *)(*(longlong *)(param_1 + 0xf718) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf718) + 0x34) = 0;
    }
  }
  return 0;
}

