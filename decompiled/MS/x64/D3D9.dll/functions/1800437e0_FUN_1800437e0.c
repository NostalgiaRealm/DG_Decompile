/*
 * FUN_1800437e0 at 1800437e0
 * undefined __fastcall FUN_1800437e0(longlong param_1, ulonglong param_2, byte param_3)
 * Address ranges: 1800437e0-1800438b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800437e0(longlong param_1,ulonglong param_2,byte param_3)

{
  char *pcVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8;
  undefined1 auStackX_9 [7];
  ulonglong local_res10;
  
  uVar2 = *(uint *)(param_1 + 0xfa10);
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar8 = uVar2;
    do {
      uVar5 = uVar8 + uVar7 >> 1;
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar6 <= param_2) {
        if (param_2 <= uVar6) break;
        uVar7 = uVar5 + 1;
        uVar4 = uVar8;
        uVar5 = uVar7;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar7);
    if (uVar5 != uVar2) {
      lVar3 = *(longlong *)(param_1 + 0xfa08);
      uVar6 = (ulonglong)uVar5;
      if ((*(ulonglong *)(lVar3 + uVar6 * 0x18) == param_2) &&
         (pcVar1 = (char *)(lVar3 + 0x10 + uVar6 * 0x18), pcVar1 != (char *)0x0)) {
        *pcVar1 = *pcVar1 + '\x01';
        *(undefined1 *)(lVar3 + 0x17 + uVar6 * 0x18) = 1;
        return;
      }
    }
  }
  _local_res8 = CONCAT71((uint7)param_3 << 0x28,1);
  _local_res8 = CONCAT17(1,_local_res8);
  local_res10 = param_2;
  FUN_18004bb50((longlong *)(param_1 + 64000),&local_res10,(undefined8 *)&local_res8);
  return;
}

