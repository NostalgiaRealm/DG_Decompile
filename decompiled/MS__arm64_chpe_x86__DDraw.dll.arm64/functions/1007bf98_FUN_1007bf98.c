/*
 * FUN_1007bf98 at 1007bf98
 * undefined FUN_1007bf98(void)
 * Address ranges: 1007bf98-1007c0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_1007bf98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined4 *)FUN_100913c0(0x30);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_100b2fa4;
    *(undefined8 *)(puVar2 + 1) = 0;
    *(undefined8 *)(puVar2 + 3) = 0;
    *(undefined8 *)(puVar2 + 5) = 0;
    *(undefined8 *)(puVar2 + 7) = 4;
    puVar2[9] = param_4;
    *(undefined8 *)(puVar2 + 10) = 0;
    iVar3 = (*(code *)PTR_FUN_100ba074)(0,0,0,0);
    piVar1 = puVar2 + 0xb;
    *piVar1 = iVar3;
    if (iVar3 != 0) {
      puVar2[1] = param_1;
      puVar2[2] = param_2;
      puVar2[7] = param_3;
      puVar2[8] = param_5;
      uVar4 = FUN_10072868(param_1,param_2,param_3);
      puVar2[10] = uVar4;
      uVar5 = FUN_1007bcf0(puVar2);
      if ((uVar5 & 1) != 0) {
        return puVar2;
      }
      (*(code *)PTR_FUN_100ba06c)(*piVar1);
      *piVar1 = 0;
    }
    FUN_1007bb60(puVar2);
    FUN_10091460(puVar2,0x30);
  }
  return (undefined4 *)0x0;
}

