/*
 * FUN_1003d010 at 1003d010
 * undefined __thiscall FUN_1003d010(void * this, uint param_1, char param_2)
 * Address ranges: 1003d010-1003d0b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003d010(void *this,uint param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int6 local_c;
  undefined2 uStack_6;
  
  uVar3 = param_1;
  uVar4 = (int)param_1 >> 0x1f;
  uVar2 = FUN_10043ff0((void *)((int)this + 0xf8f0),param_1,uVar4);
  if ((((uVar2 != *(uint *)((int)this + 0xf8f8)) &&
       (iVar1 = *(int *)((int)this + 0xf8f4), *(uint *)(iVar1 + uVar2 * 0x18) == uVar3)) &&
      (*(uint *)(iVar1 + 4 + uVar2 * 0x18) == uVar4)) &&
     (iVar1 = iVar1 + 0xc + uVar2 * 0x18, iVar1 != 0)) {
    uVar3 = 0;
    do {
      if (*(char *)(iVar1 + 2 + uVar3) == '\0') {
        *(char *)(iVar1 + uVar3 + 2) = param_2 + '\x01';
        *(undefined1 *)(iVar1 + 7) = 1;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
    *(undefined1 *)(iVar1 + 7) = 1;
    return;
  }
  _local_c = CONCAT26(0x101,(uint6)(byte)(param_2 + 1) << 0x10);
  FUN_10043dd0((void *)((int)this + 0xf8f0),&param_1,(uint *)&local_c);
  return;
}

