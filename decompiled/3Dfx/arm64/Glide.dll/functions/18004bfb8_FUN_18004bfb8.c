/*
 * FUN_18004bfb8 at 18004bfb8
 * longlong __cdecl FUN_18004bfb8(longlong param_1)
 * Address ranges: 18004bfb8-18004c06b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18004bfb8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  
  if (*(int *)(param_1 + 0xb50) == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xb48) + 1;
    *(longlong *)(param_1 + 0xb48) = lVar3;
    FUN_18004b5e0(param_1);
    FUN_18004b680(param_1);
    uVar1 = *(uint *)(param_1 + 0xb50);
    local_38 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb40) + 0x10) + 0x58))();
    uVar2 = (ulonglong)uVar1 * 8;
    local_30 = (undefined4)lVar3;
    local_48 = local_38 + (uVar2 | 4);
    local_40 = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_38 = local_38 + uVar2;
    local_50 = 0x200000002;
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x210))
              (*(longlong **)(param_1 + 0x688),2,&local_48,&local_50);
  }
  return lVar3;
}

