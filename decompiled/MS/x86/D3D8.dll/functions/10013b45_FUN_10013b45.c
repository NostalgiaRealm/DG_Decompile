/*
 * FUN_10013b45 at 10013b45
 * undefined __thiscall FUN_10013b45(void * this, uint param_1, int param_2, uint param_3)
 * Address ranges: 10013b45-10013c30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_10013b45(void *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = param_1 * 0x1d + param_2;
  if (*(char *)((int)this + 0x220) == '\0') {
    if (*(uint *)((int)this + uVar3 * 4 + 0x544) != param_3) {
      if ((((param_2 == 1) || (param_2 == 2)) || (param_2 == 4)) || (param_2 == 5)) {
        *(uint *)((int)this + 0xa04) = *(uint *)((int)this + 0xa04) | 1 << (param_1 & 0x1f);
      }
      else {
        FUN_10013c31(this,param_1,param_2,param_3);
      }
      *(uint *)((int)this + uVar3 * 4 + 0x544) = param_3;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x210) + *(int *)((int)this + 0x21c) * 4);
    *(uint *)(iVar1 + 0x2c0 + uVar3 * 4) = param_3;
    pbVar2 = (byte *)(iVar1 + 0x934c + (uVar3 >> 5) * 4 + ((int)(uVar3 & 0x1f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (uVar3 & 7);
  }
  return;
}

