/*
 * FUN_10064a01 at 10064a01
 * undefined __thiscall FUN_10064a01(void * this, int param_1, int param_2)
 * Address ranges: 10064a01-10064bae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10064a01(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int local_8;
  
  iVar2 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_10060ebc(*(void **)((int)this + 0xa8),2,*(int *)((int)this + 8));
  }
  uVar4 = 0x16;
  if (*(int *)((int)this + 0x1c) != 0) {
    iVar3 = *(int *)((int)this + 0x1c) * 4;
    if (*(char *)((int)this + 0x150) == '\0') {
      uVar4 = *(uint *)(&DAT_100b0560 + iVar3);
    }
    else {
      uVar4 = 6;
    }
    uVar4 = (*(uint *)(&DAT_100b06b8 + iVar3) & 7 | 0xf8000020) << 4 | uVar4 & 0xf;
  }
  local_8 = *(int *)((int)this + 0xc0);
  if (local_8 == 0) {
    local_8 = FUN_1006447b(this);
  }
  iVar3 = 1 << ((byte)param_1 & 0x1f);
  fVar5 = (float)((double)iVar3 + (double)(&DAT_100b5ce0)[-(iVar3 >> 0x1f)]);
  if (*(int *)((int)this + 0x114) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 * 0x1c + *(int *)((int)this + 0x120));
  }
  iVar3 = *(int *)((int)this + 0x58);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 0x54);
  }
  FUN_1006118c(*(void **)((int)this + 0xa8),*(int *)((int)this + 0x1c),*(uint *)((int)this + 0x1c),
               param_1,param_2,param_1,param_2,0.0,0,
               (float)((double)*(int *)((int)this + 0x14) +
                      (double)(&DAT_100b5ce0)[-(*(int *)((int)this + 0x14) >> 0x1f)]) / fVar5,
               (float)((double)*(int *)((int)this + 0x18) +
                      (double)(&DAT_100b5ce0)[-(*(int *)((int)this + 0x18) >> 0x1f)]) / fVar5,0,0,
               (float)((double)*(int *)((int)this + 0xdc) +
                      (double)(&DAT_100b5ce0)[-(*(int *)((int)this + 0xdc) >> 0x1f)]) / fVar5,
               (float)((double)*(int *)((int)this + 0xe0) +
                      (double)(&DAT_100b5ce0)[-(*(int *)((int)this + 0xe0) >> 0x1f)]) / fVar5,
               *(undefined4 *)((int)this + 0xf4),
               *(undefined4 *)(*(int *)((int)this + 0x100) + iVar2 * 0x1c),uVar1,iVar3,local_8,0,0,0
               ,'\0',uVar4,1);
  return;
}

