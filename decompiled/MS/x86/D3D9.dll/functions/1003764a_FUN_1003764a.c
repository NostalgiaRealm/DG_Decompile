/*
 * FUN_1003764a at 1003764a
 * int __thiscall FUN_1003764a(void * this, undefined4 * param_1, uint param_2, uint param_3, int param_4, uint param_5, undefined4 * param_6)
 * Address ranges: 1003764a-10037790
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1003764a(void *this,undefined4 *param_1,uint param_2,uint param_3,int param_4,uint param_5,
            undefined4 *param_6)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *this_00;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  uint local_44 [15];
  void *local_8;
  
  iVar4 = 0;
  if ((char)param_5 == '\0') {
    local_8 = this;
    FUN_1003757c(param_1,param_4,local_44);
    uVar3 = FUN_10037972((void *)((int)this + 8),(int)local_44);
    if (((uVar3 == *(uint *)((int)this + 0x10)) ||
        (uVar3 = FUN_1003747e((void *)(uVar3 * 0x40 + *(int *)((int)this + 0xc)),local_44),
        (char)uVar3 == '\0')) || ((undefined4 *)(extraout_ECX + 0x38) == (undefined4 *)0x0)) {
      this_00 = (undefined4 *)FUN_100cfd55(0x78);
      if (this_00 == (undefined4 *)0x0) {
        return 0;
      }
      FUN_100371eb(this_00,*(int *)this,*(int *)((int)this + 4),0);
      puVar6 = this_00 + 0xe;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *param_1;
        param_1 = param_1 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined1 *)(this_00 + 0x1c) = param_6._0_1_;
      *this_00 = &PTR_FUN_100d5570;
      uVar5 = 0;
      uVar7 = 0xffff0000;
      param_6 = this_00;
      uVar3 = FUN_10058008((int)(this_00 + 0xe));
      param_5 = uVar3 & 0xffff;
      uVar3 = 0;
      bVar8 = param_5 == 0;
      if (!bVar8) {
        for (; (param_5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      while (pvVar2 = local_8, !bVar8) {
        pbVar1 = (byte *)((int)&param_5 + ((int)uVar3 >> 3));
        *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
        lVar9 = __allshl((char)uVar3 * '\x03',0);
        uVar3 = (uint)((ulonglong)lVar9 >> 0x20) | uVar7;
        uVar5 = (uint)lVar9 | uVar5;
        uVar7 = (uVar7 ^ uVar3) & 0xffff0000 ^ uVar3;
        uVar3 = 0;
        bVar8 = param_5 == 0;
        if (!bVar8) {
          for (; (param_5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
      }
      this_00[2] = uVar5;
      this_00[3] = uVar7;
      uVar3 = FUN_10037972((void *)((int)local_8 + 8),(int)local_44);
      if ((uVar3 == *(uint *)((int)pvVar2 + 0x10)) ||
         (uVar5 = FUN_1003747e((void *)(*(int *)((int)pvVar2 + 0xc) + uVar3 * 0x40),local_44),
         (char)uVar5 == '\0')) {
        FUN_100378a4((void *)((int)pvVar2 + 8),uVar3,local_44,&param_6);
        this_00 = param_6;
      }
      else {
        *(undefined4 **)(extraout_ECX_00 + 0x38) = this_00;
      }
    }
    else {
      this_00 = *(undefined4 **)(extraout_ECX + 0x38);
    }
    iVar4 = FUN_10037261(this_00,param_2,param_3,0,0);
  }
  return iVar4;
}

