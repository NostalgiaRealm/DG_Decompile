/*
 * FUN_1800a7740 at 1800a7740
 * undefined __fastcall FUN_1800a7740(longlong * param_1, uint * param_2, undefined8 param_3, ulonglong param_4, uint param_5)
 * Address ranges: 1800a7740-1800a7833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a7740(longlong *param_1,uint *param_2,undefined8 param_3,ulonglong param_4,uint param_5
                  )

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_2 + 4;
  uVar2 = -(uint)((*param_2 & 0x1000) != 0) & 0x3b;
  FUN_1800edbe0(puVar1,param_1,(-(uint)((*param_2 & 0x1000) != 0) & 7) + 0x20,param_4);
  FUN_1800edbe0(puVar1,param_1,uVar2 + 1,param_4 & 0xffffffff);
  FUN_1800edbe0(puVar1,param_1,uVar2 + 1,(ulonglong)param_5);
  return;
}

