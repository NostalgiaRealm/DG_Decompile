/*
 * FUN_180026784 at 180026784
 * bool __fastcall FUN_180026784(longlong param_1, uint param_2, char param_3, byte param_4)
 * Address ranges: 180026784-18002685c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180026784(longlong param_1,uint param_2,char param_3,byte param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  lVar3 = (ulonglong)param_2 * 0x170 + param_1;
  if (param_3 == '\0') {
    FUN_180025a44(param_1,lVar3 + 0x148,param_4);
  }
  else {
    FUN_180025aec(param_1,param_2,0,0,*(uint *)(lVar3 + 0x168),*(uint *)(lVar3 + 0x16c),0,0,0,0,
                  param_4);
  }
  local_res8 = 0;
  plVar1 = *(longlong **)((ulonglong)(-(uint)(param_4 != 0) & 0x30) + 0x268 + lVar3);
  iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,0,0,&local_res8);
  if (-1 < iVar2) {
    *(undefined8 *)(lVar3 + 0x1c8) = local_res8;
    *(undefined4 *)(lVar3 + 0x1d0) =
         *(undefined4 *)((ulonglong)(-(uint)(param_4 != 0) & 0x30) + 0x280 + lVar3);
  }
  return -1 < iVar2;
}

