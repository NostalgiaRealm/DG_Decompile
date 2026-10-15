/*
 * FUN_180040b48 at 180040b48
 * undefined8 * __fastcall FUN_180040b48(undefined8 param_1, int * param_2)
 * Address ranges: 180040b48-180040c47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180040b48(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 local_48 [16];
  
  uVar5 = DAT_18006c870;
  puVar6 = (undefined8 *)FUN_1800407e4(local_48,param_2);
  iVar2 = *(int *)((longlong)param_2 + 0xd2);
  uVar1 = puVar6[2];
  uVar3 = *puVar6;
  uVar4 = puVar6[1];
  if ((iVar2 != 0) && (iVar2 != 1)) {
    if (iVar2 == 2) {
      uVar7 = 1;
      goto LAB_180040baf;
    }
    if (iVar2 == 3) {
      uVar7 = 2;
      goto LAB_180040baf;
    }
    if (iVar2 == 4) {
      uVar7 = 3;
      goto LAB_180040baf;
    }
  }
  uVar7 = 0;
LAB_180040baf:
  puVar6 = (undefined8 *)FUN_18005db9c(0x4a0);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    FUN_180056300(puVar6,uVar5,uVar7);
    puVar6[0x91] = uVar3;
    puVar6[0x92] = uVar4;
    *puVar6 = &PTR_FUN_180063d18;
    puVar6[0x93] = uVar1;
    puVar6[0x90] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x434) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar6 + 0x43c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar6 + 0x444) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar6 + 0x44c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar6 + 0x454) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar6 + 0x45c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar6 + 0x464) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar6 + 0x46c) = 0xffffffffffffffff;
    *(bool *)(puVar6 + 0x8f) = *(int *)(puVar6 + 0x91) == 5;
  }
  return puVar6;
}

