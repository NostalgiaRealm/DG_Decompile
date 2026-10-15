/*
 * FUN_10120ed8 at 10120ed8
 * undefined FUN_10120ed8(void)
 * Address ranges: 10120ed8-10120fc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10120ed8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined8 *)FUN_101321c0(0x24);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x40000000000;
    *(undefined4 *)(puVar2 + 4) = 0;
    iVar3 = (*(code *)PTR_FUN_1016c050)(0,0,0,0);
    piVar1 = (int *)(puVar2 + 4);
    *piVar1 = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)puVar2 = param_1;
      *(undefined4 *)((int)puVar2 + 4) = param_2;
      *(undefined4 *)(puVar2 + 3) = param_3;
      uVar4 = FUN_10120bb8(puVar2);
      if ((uVar4 & 1) != 0) {
        return puVar2;
      }
      (*(code *)PTR_FUN_1016c048)(*piVar1);
      *piVar1 = 0;
    }
    FUN_101209e0(puVar2);
    FUN_10132260(puVar2,0x24);
  }
  return (undefined8 *)0x0;
}

