/*
 * FUN_180050a78 at 180050a78
 * undefined __fastcall FUN_180050a78(undefined8 * param_1)
 * Address ranges: 180050a78-180050aea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050a78(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_res8 [2];
  
  uVar1 = *(uint *)(param_1 + 1);
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  plVar3 = (longlong *)*param_1;
  FUN_18005f000(plVar3,uVar1,iVar2,*(float *)(param_1 + 2));
  if (((uVar1 < 0x10) && (iVar2 == 0xb)) &&
     (local_res8[0] = (int)plVar3[0x1ed0],
     (*(byte *)((longlong)local_res8 + ((longlong)(int)uVar1 >> 3)) >> (uVar1 & 7) & 1) != 0)) {
    FUN_1800438c0((longlong)plVar3,plVar3[(ulonglong)uVar1 + 0x1fc2]);
    plVar3[(ulonglong)uVar1 + 0x1fc2] = 0;
  }
  return;
}

