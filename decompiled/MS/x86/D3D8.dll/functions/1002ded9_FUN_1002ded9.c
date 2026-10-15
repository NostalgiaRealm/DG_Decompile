/*
 * FUN_1002ded9 at 1002ded9
 * int __thiscall FUN_1002ded9(void * this, undefined4 * param_1, uint param_2, uint param_3, undefined4 * param_4, uint param_5, uint param_6)
 * Address ranges: 1002ded9-1002e02a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1002ded9(void *this,undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4,
            uint param_5,uint param_6)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *this_00;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint local_44 [15];
  void *local_8;
  
  iVar5 = 0;
  if ((char)param_5 == '\0') {
    local_8 = this;
    FUN_1002de0b(param_1,(int)param_4,local_44);
    uVar4 = FUN_1002e1f9((void *)((int)this + 8),(int)local_44);
    if (((uVar4 == *(uint *)((int)this + 0x10)) ||
        (uVar4 = FUN_1002dd0d((void *)(uVar4 * 0x40 + *(int *)((int)this + 0xc)),local_44),
        (char)uVar4 == '\0')) || ((undefined4 *)(extraout_ECX + 0x38) == (undefined4 *)0x0)) {
      this_00 = (undefined4 *)FUN_100ad475(0x78);
      if (this_00 == (undefined4 *)0x0) {
        return 0;
      }
      param_4 = this_00;
      FUN_1002da7a(this_00,*(int *)this,*(int *)((int)this + 4),0);
      puVar7 = this_00 + 0xe;
      for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *param_1;
        param_1 = param_1 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined1 *)(this_00 + 0x1c) = (undefined1)param_6;
      *this_00 = &PTR_FUN_100b203c;
      uVar6 = 0xff000000;
      param_1 = this_00;
      uVar4 = FUN_10049181((int)(this_00 + 0xe));
      param_5 = uVar4 & 0xff;
      uVar4 = 0;
      if (param_5 != 0) {
        for (; (param_5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      uVar3 = param_6;
      if (param_5 != 0) {
        uVar6 = 0xff000000;
        do {
          pbVar1 = (byte *)((int)&param_5 + ((int)uVar4 >> 3));
          *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
          lVar8 = __allshl((char)uVar4 * '\x03',0);
          uVar4 = (uint)lVar8 | uVar6;
          uVar6 = (uVar6 ^ uVar4) & 0xff000000 ^ uVar4;
          uVar4 = 0;
          if (param_5 != 0) {
            for (; (param_5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          this_00 = param_4;
          uVar3 = uVar6;
        } while (param_5 != 0);
      }
      param_6 = uVar3;
      pvVar2 = local_8;
      this_00[2] = uVar6;
      this_00[3] = 0xffffffff;
      uVar4 = FUN_1002e1f9((void *)((int)local_8 + 8),(int)local_44);
      if ((uVar4 == *(uint *)((int)pvVar2 + 0x10)) ||
         (uVar6 = FUN_1002dd0d((void *)(*(int *)((int)pvVar2 + 0xc) + uVar4 * 0x40),local_44),
         (char)uVar6 == '\0')) {
        FUN_1002e12b((void *)((int)pvVar2 + 8),uVar4,local_44,&param_1);
        this_00 = param_1;
      }
      else {
        *(undefined4 **)(extraout_ECX_00 + 0x38) = this_00;
      }
    }
    else {
      this_00 = *(undefined4 **)(extraout_ECX + 0x38);
    }
    iVar5 = FUN_1002daf0(this_00,param_2,param_3,0,0);
  }
  return iVar5;
}

