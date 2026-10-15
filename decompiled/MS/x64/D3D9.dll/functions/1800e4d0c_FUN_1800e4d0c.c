/*
 * FUN_1800e4d0c at 1800e4d0c
 * undefined8 __fastcall FUN_1800e4d0c(longlong param_1, ulonglong param_2, longlong param_3, longlong param_4, undefined4 param_5)
 * Address ranges: 1800e4d0c-1800e4dcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800e4d0c(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  FUN_1800e97b4(param_3,*(int *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
                *(ulonglong *)(param_4 + 0x18),*(longlong **)(*(longlong *)(param_1 + 0xb10) + 0x18)
                ,*(ulonglong *)(param_1 + 0xb78));
  FUN_1800e2d18(param_1,param_2,0,1,0x400);
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x78))
            (*(longlong **)(param_1 + 0x688),param_2,param_5,*(undefined8 *)(param_4 + 8),
             *(longlong *)(param_4 + 0x10) - *(longlong *)(param_4 + 0x18),
             *(undefined4 *)(param_4 + 0x20));
  uVar1 = FUN_1800e25b4(param_1);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

