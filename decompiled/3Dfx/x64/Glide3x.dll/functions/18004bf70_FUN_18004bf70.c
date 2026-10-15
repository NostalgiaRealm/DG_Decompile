/*
 * FUN_18004bf70 at 18004bf70
 * undefined8 __fastcall FUN_18004bf70(longlong param_1, ulonglong param_2, longlong param_3, longlong param_4, undefined4 param_5)
 * Address ranges: 18004bf70-18004c02f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18004bf70(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  FUN_1800594c4(param_3,*(int *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
                *(ulonglong *)(param_4 + 0x18),*(longlong **)(*(longlong *)(param_1 + 0xb10) + 0x18)
                ,*(ulonglong *)(param_1 + 0xb78));
  FUN_18004a068(param_1,param_2,0,1,0x400);
  FUN_180049814(param_1);
  FUN_180049954(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x78))
            (*(longlong **)(param_1 + 0x688),param_2,param_5,*(undefined8 *)(param_4 + 8),
             *(longlong *)(param_4 + 0x10) - *(longlong *)(param_4 + 0x18),
             *(undefined4 *)(param_4 + 0x20));
  uVar1 = FUN_180049904(param_1);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

