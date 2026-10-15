/*
 * FUN_1800499d0 at 1800499d0
 * ulonglong __fastcall FUN_1800499d0(longlong param_1, byte param_2, byte param_3, int param_4)
 * Address ranges: 1800499d0-180049b2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800499d0(longlong param_1,byte param_2,byte param_3,int param_4)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar4;
  longlong lVar5;
  longlong local_58;
  longlong local_50;
  ulonglong uVar3;
  
  plVar2 = FUN_1800e8198(*(longlong *)(param_1 + 0xf718),&local_58,param_2 + 1,0,0);
  lVar5 = local_50;
  if (local_50 != 0) {
    FUN_1800e8198(*(longlong *)(param_1 + 0xf710),&local_58,param_3 + 1,0,0);
    if (local_50 != 0) {
      uVar3 = *(ulonglong *)(param_1 + 0x68);
      if (uVar3 != *(ulonglong *)(param_1 + 0x60)) {
        uVar1 = (int)uVar3 - *(int *)(param_1 + 0x58);
        uVar3 = (ulonglong)uVar1;
        *(uint *)(param_1 + 0x78) = uVar1;
      }
      *(longlong *)(param_1 + 0x68) = lVar5;
      *(longlong *)(param_1 + 0x58) = lVar5;
      *(longlong *)(param_1 + 0x88) = local_50;
      if (param_2 == 0) {
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x74);
        uVar1 = *(uint *)(param_1 + 0x78);
        uVar4 = uVar1;
        if ((param_4 != 0) && (param_4 != *(int *)(param_1 + 0x80))) {
          uVar4 = *(int *)(param_1 + 0x70) * param_4;
          if (uVar4 < uVar1) {
            *(uint *)(param_1 + 0x7c) = uVar1 - uVar4;
            uVar4 = uVar1;
          }
          else {
            *(undefined4 *)(param_1 + 0x7c) = 0;
          }
        }
        uVar3 = (ulonglong)uVar4;
        lVar5 = lVar5 + uVar3;
        *(longlong *)(param_1 + 0x68) = lVar5;
      }
      else {
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      if (param_4 != 0) {
        *(int *)(param_1 + 0x80) = param_4;
      }
      *(longlong *)(param_1 + 0x60) = lVar5;
      *(undefined4 *)(param_1 + 0x74) = 0;
      if (param_3 != 0) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined4 *)(param_1 + 0x94) = 0;
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x94);
      *(undefined4 *)(param_1 + 0x94) = 0;
      local_50 = local_50 + (ulonglong)*(uint *)(param_1 + 0x90) * 4;
      *(longlong *)(param_1 + 0x88) = local_50;
      return CONCAT71((int7)((ulonglong)local_50 >> 8),1);
    }
    plVar2 = *(longlong **)(param_1 + 0xf718);
    if (*(int *)((longlong)plVar2 + 0x34) != 0) {
      *(undefined4 *)((longlong)plVar2 + 0x34) = 0;
    }
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}

