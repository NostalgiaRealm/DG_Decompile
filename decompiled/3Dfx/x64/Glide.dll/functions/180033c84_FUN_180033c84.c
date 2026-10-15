/*
 * FUN_180033c84 at 180033c84
 * bool __fastcall FUN_180033c84(longlong param_1, ulonglong param_2, char param_3, byte param_4)
 * Address ranges: 180033c84-180033d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180033c84(longlong param_1,ulonglong param_2,char param_3,byte param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar3 = (param_2 & 0xffffffff) * 0x180 + param_1;
  if (param_3 != '\0') {
    FUN_180032f48(param_1,param_2,0,0,*(uint *)(lVar3 + 0x168),*(uint *)(lVar3 + 0x16c),0,0,0,0,
                  param_4);
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
  iVar2 = (**(code **)(*plVar1 + 0x70))
                    (plVar1,*(undefined8 *)(lVar3 + 0x2b8 + (ulonglong)param_4 * 8),0,3,0,&local_18)
  ;
  if (-1 < iVar2) {
    *(undefined8 *)(lVar3 + 0x1c8) = local_18;
    *(undefined4 *)(lVar3 + 0x1d0) = local_10;
  }
  return -1 < iVar2;
}

