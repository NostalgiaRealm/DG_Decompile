/*
 * FUN_180043ab0 at 180043ab0
 * undefined8 * __cdecl FUN_180043ab0(undefined8 param_1, int * param_2)
 * Address ranges: 180043ab0-180043b7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180043ab0(undefined8 param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 extraout_x10;
  undefined4 uVar5;
  undefined8 extraout_d17;
  undefined4 local_30 [2];
  undefined8 uStack_28;
  
  uVar2 = DAT_18006b860;
  lVar3 = FUN_180043720(local_30,param_2);
  uVar1 = *(uint *)(lVar3 + 0xd2);
  if (1 < uVar1) {
    if (uVar1 == 2) {
      uVar5 = 1;
      goto LAB_180043b10;
    }
    if (uVar1 == 3) {
      uVar5 = 2;
      goto LAB_180043b10;
    }
    if (uVar1 == 4) {
      uVar5 = 3;
      goto LAB_180043b10;
    }
  }
  uVar5 = 0;
LAB_180043b10:
  puVar4 = (undefined8 *)FUN_18005fb88(0x4a0);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)FUN_180057a10(puVar4,uVar2,uVar5);
    *puVar4 = &PTR_FUN_180064d30;
    puVar4[0x90] = 0;
    puVar4[0x92] = uStack_28;
    puVar4[0x91] = extraout_d17;
    puVar4[0x93] = extraout_x10;
    *(undefined8 *)((longlong)puVar4 + 0x43c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar4 + 0x434) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar4 + 0x44c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar4 + 0x444) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar4 + 0x45c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar4 + 0x454) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar4 + 0x46c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar4 + 0x464) = 0xffffffffffffffff;
    *(bool *)(puVar4 + 0x8f) = *(int *)(puVar4 + 0x91) == 5;
  }
  return puVar4;
}

