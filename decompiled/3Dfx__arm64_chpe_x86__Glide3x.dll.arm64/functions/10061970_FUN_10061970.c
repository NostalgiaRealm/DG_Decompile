/*
 * FUN_10061970 at 10061970
 * undefined FUN_10061970(void)
 * Address ranges: 10061970-10061a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10061970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined4 *)FUN_1007dc70(0x30);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_10098fe8;
    *(undefined8 *)(puVar2 + 1) = 0;
    *(undefined8 *)(puVar2 + 3) = 0;
    *(undefined8 *)(puVar2 + 5) = 0;
    *(undefined8 *)(puVar2 + 7) = 4;
    puVar2[9] = param_4;
    *(undefined8 *)(puVar2 + 10) = 0;
    iVar3 = (*(code *)PTR_FUN_100a0014)(0,0,0,0);
    piVar1 = puVar2 + 0xb;
    *piVar1 = iVar3;
    if (iVar3 != 0) {
      puVar2[1] = param_1;
      puVar2[2] = param_2;
      puVar2[7] = param_3;
      puVar2[8] = param_5;
      uVar4 = FUN_100610f8(param_1,param_2,param_3);
      puVar2[10] = uVar4;
      uVar5 = FUN_100616f0(puVar2);
      if ((uVar5 & 1) != 0) {
        return puVar2;
      }
      (*(code *)PTR_FUN_100a000c)(*piVar1);
      *piVar1 = 0;
    }
    FUN_10061560(puVar2);
    FUN_1007dd10(puVar2,0x30);
  }
  return (undefined4 *)0x0;
}

