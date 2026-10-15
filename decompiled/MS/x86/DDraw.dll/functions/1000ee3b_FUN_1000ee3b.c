/*
 * FUN_1000ee3b at 1000ee3b
 * uint __thiscall FUN_1000ee3b(void * this, int * param_1)
 * Address ranges: 1000ee3b-1000ef85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000ee3b(void *this,int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *extraout_ECX;
  undefined1 local_50 [76];
  
  uVar4 = FUN_100494b4(*(void **)((int)this + 0x40),*(int *)((int)this + 0xa8));
  if ((uVar4 == 0) || (uVar4 == *(uint *)((int)this + 0x94))) {
    iVar1 = *(int *)((int)this + 0x90);
    FUN_1000eb89(local_50,*(uint *)((int)this + 0x94),*(undefined4 *)((int)this + 0x10),
                 *(undefined4 *)((int)this + 0xa8),*(undefined4 *)((int)this + 0x14),
                 *(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0xa0),
                 *(undefined4 *)((int)this + 0xa4),*(undefined4 *)((int)this + 0xb4),
                 *(undefined4 *)((int)this + 0xb8),
                 *(undefined4 *)(&DAT_10062f78 + *(int *)(iVar1 + 0x1c) * 4),iVar1,
                 *(undefined4 *)((int)this + 0xbc),
                 *(undefined4 *)(&DAT_10062f64 + *(int *)(iVar1 + 0xce) * 4),
                 *(undefined4 *)((int)this + 0xc0),*(undefined1 *)(iVar1 + 0x26),
                 *(int *)(iVar1 + 0x18) == 1,iVar1,*(undefined4 *)(iVar1 + 0xda),
                 *(undefined4 *)(iVar1 + 0xde));
    piVar5 = FUN_10048db6(*(void **)((int)this + 0x40),extraout_ECX);
    *(int **)((int)this + 0xac) = piVar5;
    uVar4 = 0;
    if (piVar5 != (int *)0x0) {
      bVar3 = FUN_1000ed97(this,param_1);
      if (bVar3) {
        *(undefined4 *)((int)this + 0xb0) = 0;
        uVar6 = FUN_1004935c(*(void **)((int)this + 0x40),*(int *)((int)this + 0xac),1);
        if ((char)uVar6 == '\0') {
          uVar4 = FUN_1004939f(*(void **)((int)this + 0x40),*(int *)((int)this + 0xa8),0);
          goto LAB_1000ef2f;
        }
      }
      iVar1 = *(int *)((int)this + 0xac);
      if ((*(int *)(iVar1 + 0xd80) != 0) && (*(int **)(iVar1 + 0xd78) != (int *)0x0)) {
        FUN_1000a94c((void *)((int)this + 0x48),*(int **)(iVar1 + 0xd70),*(int **)(iVar1 + 0xd78));
      }
      iVar1 = *(int *)((int)this + 0xac);
      *(uint *)((int)this + 0x14) = *(uint *)(iVar1 + 0x10) / *(uint *)(iVar1 + 0x18);
      uVar2 = (ulonglong)*(uint *)(iVar1 + 0x14) / (ulonglong)*(uint *)(iVar1 + 0x1c);
      *(int *)((int)this + 0x18) = (int)uVar2;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
LAB_1000ef2f:
  *(undefined4 *)((int)this + 0xa8) = 0;
  return uVar4 & 0xffffff00;
}

