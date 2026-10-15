/*
 * FUN_100613a6 at 100613a6
 * uint __thiscall FUN_100613a6(void * this, int * param_1)
 * Address ranges: 100613a6-10061410
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100613a6(void *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_1005d6e4(param_1);
  uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
  uVar1 = FUN_100615fa(this,(uint)uVar7,uVar4);
  uVar2 = *(uint *)((int)this + 8);
  if (uVar1 != uVar2) {
    if ((*(uint *)(uVar1 * 0x40 + *(int *)this) == (uint)uVar7) &&
       (*(uint *)(uVar1 * 0x40 + 4 + *(int *)this) == uVar4)) {
      while (uVar1 = uVar1 + 1, uVar1 < uVar2) {
        puVar5 = (undefined4 *)(uVar1 * 0x40 + *(int *)this);
        puVar6 = puVar5 + -0x10;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar2 = *(uint *)((int)this + 8);
      }
      *(uint *)((int)this + 8) = uVar2 - 1;
      return CONCAT31((int3)(uVar2 - 1 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

