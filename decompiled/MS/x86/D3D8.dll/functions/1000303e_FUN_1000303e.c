/*
 * FUN_1000303e at 1000303e
 * uint __thiscall FUN_1000303e(void * this, int param_1, int param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 1000303e-100030b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1000303e(void *this,int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *extraout_EDX;
  undefined *puVar3;
  
  puVar1 = FUN_100031b7(this,param_1);
  puVar2 = (undefined *)param_3;
  if (param_2 == 1) {
    puVar3 = extraout_EDX;
    if (param_3 <= *(uint *)(puVar1 + 0x58)) {
      puVar2 = (undefined *)0x1;
      puVar3 = (undefined *)((uint)extraout_EDX & 0xff);
      if (param_4 <= *(uint *)(puVar1 + 0x5c)) {
        puVar3 = puVar2;
      }
    }
    goto LAB_100030ae;
  }
  if (param_2 == 2) {
LAB_10003081:
    puVar3 = extraout_EDX;
    if (((param_3 <= *(uint *)(puVar1 + 0x58)) &&
        (puVar3 = extraout_EDX, param_4 <= *(uint *)(puVar1 + 0x5c))) &&
       (puVar2 = (undefined *)param_5, puVar3 = extraout_EDX, param_5 <= *(uint *)(puVar1 + 0x60)))
    {
      puVar2 = (undefined *)param_5;
      puVar3 = (undefined *)0x1;
    }
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 4) goto LAB_10003081;
      puVar2 = puVar1;
      puVar3 = extraout_EDX;
      if (param_2 != 5) goto LAB_100030ae;
    }
    puVar2 = (undefined *)param_3;
    puVar3 = (undefined *)0x0;
    if (param_3 <= *(uint *)(puVar1 + 0x58)) {
      puVar3 = (undefined *)(uint)(byte)(1 - (*(uint *)(puVar1 + 0x5c) < param_4));
    }
  }
LAB_100030ae:
  return CONCAT31((int3)((uint)puVar2 >> 8),(char)puVar3);
}

