/*
 * FUN_1003f67b at 1003f67b
 * uint __thiscall FUN_1003f67b(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1003f67b-1003f70d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1003f67b(void *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  uint uVar3;
  sbyte sVar4;
  uint uVar5;
  int local_8;
  
  uVar5 = 0xffffffff;
  sVar4 = (*(char *)((int)this + 0x40) != '\0') + 1;
  uVar3 = param_3 << sVar4;
  if (uVar3 <= *(uint *)((int)this + 0x18)) {
    uVar2 = *(int *)((int)this + 0x3c) + uVar3;
    if (*(uint *)((int)this + 0x18) < uVar2) {
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    local_8 = 0;
    bVar1 = FUN_10030034((void *)((int)this + 4),*(uint *)((int)this + 0x18) < uVar2,'\x01',&local_8
                        );
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_100adac0((undefined4 *)(*(int *)((int)this + 0x3c) + local_8),
                   (undefined4 *)((param_2 << sVar4) + param_1),uVar3);
      FUN_10030246((int)this + 4);
      uVar5 = *(uint *)((int)this + 0x3c) >> sVar4;
      *(uint *)((int)this + 0x3c) = uVar3 + *(uint *)((int)this + 0x3c);
    }
  }
  return uVar5;
}

