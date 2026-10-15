/*
 * FUN_180052ba0 at 180052ba0
 * undefined8 __cdecl FUN_180052ba0(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 180052ba0-180052c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180052ba0(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  iVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x48))
                    (*(longlong **)(param_2 + 8),0,&DAT_1800698a8,param_2 + 0xd78);
  if (-1 < iVar2) {
    local_34 = 0;
    local_40 = *(undefined4 *)(&DAT_180065fb8 + (longlong)*(int *)(param_2 + 0x34) * 4);
    local_3c = 4;
    plVar3 = *(longlong **)(param_1 + (ulonglong)uVar1 * 0x18c0 + 0x6b0);
    iVar2 = (**(code **)(*plVar3 + 0x48))
                      (plVar3,*(undefined8 *)(param_2 + 0xd78),&local_40,param_2 + 0xd80);
    if (-1 < iVar2) {
      FUN_180052460(param_1,param_2,param_3);
      return 1;
    }
    (**(code **)(**(longlong **)(param_2 + 0xd78) + 0x10))();
    *(undefined8 *)(param_2 + 0xd78) = 0;
  }
  return 0;
}

