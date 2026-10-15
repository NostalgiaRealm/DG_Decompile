/*
 * FUN_10011993 at 10011993
 * undefined __thiscall FUN_10011993(void * this, int param_1, uint param_2, uint param_3, int param_4, char param_5)
 * Address ranges: 10011993-10011a37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10011993(void *this,int param_1,uint param_2,uint param_3,int param_4,char param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  iVar3 = (**(code **)(*(int *)this + 0x2c))(param_1);
  uVar1 = *(uint *)(iVar3 + 0x18);
  if (((param_2 < uVar1) && (param_3 <= uVar1)) ||
     ((*(uint *)(iVar3 + 0x1c) <= param_2 && (*(uint *)(iVar3 + 0x1c) < param_3)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  puVar5 = (uint *)(iVar3 + 0x1c);
  if (((*puVar5 != uVar1) && (!bVar2)) &&
     (((param_2 != uVar1 ||
       (((param_3 != *puVar5 || (param_4 != *(int *)(iVar3 + 0x14))) || (param_5 == '\0')))) &&
      (uVar4 = FUN_100165a9(iVar3), (char)uVar4 == '\0')))) {
    if ((*(byte *)(iVar3 + 0x4a) & 2) != 0) {
      (**(code **)(*(int *)this + 0x20))(param_1,1,0);
      FUN_1001fade(*(void **)((int)this + 4),param_1);
    }
    if (param_5 != '\0') {
      (**(code **)(*(int *)this + 0x34))(param_1);
      *puVar5 = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
  }
  return;
}

