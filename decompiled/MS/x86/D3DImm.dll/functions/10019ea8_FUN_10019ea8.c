/*
 * FUN_10019ea8 at 10019ea8
 * int __thiscall FUN_10019ea8(void * this, undefined4 * param_1, uint param_2, uint param_3, undefined4 * param_4, uint param_5)
 * Address ranges: 10019ea8-1001a01a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_10019ea8(void *this,undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4,
            uint param_5)

{
  int iVar1;
  byte *pbVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *this_00;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint local_44 [14];
  void *local_c;
  undefined4 *local_8;
  
  iVar5 = 0;
  if ((char)param_5 == '\0') {
    local_c = this;
    FUN_10019dda(param_1,(int)param_4,local_44);
    uVar4 = FUN_1001a1e9((void *)((int)this + 8),(int)local_44);
    if (((uVar4 == *(uint *)((int)this + 0x10)) ||
        (uVar4 = FUN_10019cdc((void *)(uVar4 * 0x40 + *(int *)((int)this + 0xc)),local_44),
        (char)uVar4 == '\0')) || ((undefined4 *)(extraout_ECX + 0x38) == (undefined4 *)0x0)) {
      this_00 = (undefined4 *)FUN_1005c755(0x78);
      if (this_00 == (undefined4 *)0x0) {
        return 0;
      }
      iVar5 = *(int *)this;
      iVar1 = *(int *)((int)this + 4);
      this_00[2] = 0;
      this_00[3] = 0;
      *this_00 = &PTR_LAB_1005e9e0;
      this_00[9] = iVar1;
      this_00[8] = iVar5;
      this_00[4] = 0;
      this_00[5] = 0;
      this_00[6] = 0;
      this_00[7] = 0;
      this_00[0xb] = 0;
      *(undefined1 *)(this_00 + 0xd) = 0;
      this_00[0xc] = *(undefined4 *)(iVar1 * 0x28 + 0x38 + iVar5);
      puVar7 = this_00 + 0xe;
      for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *param_1;
        param_1 = param_1 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined1 *)(this_00 + 0x1c) = 0;
      *this_00 = &PTR_FUN_1005e9e8;
      uVar6 = 0xff000000;
      param_4 = this_00;
      local_8 = this_00;
      uVar4 = FUN_100308ab((int)(this_00 + 0xe));
      param_5 = uVar4 & 0xff;
      uVar4 = 0;
      if (param_5 != 0) {
        for (; (param_5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      if (param_5 != 0) {
        uVar6 = 0xff000000;
        do {
          pbVar2 = (byte *)((int)&param_5 + ((int)uVar4 >> 3));
          *pbVar2 = *pbVar2 & ~('\x01' << (uVar4 & 7));
          lVar8 = __allshl((char)uVar4 * '\x03',0);
          uVar4 = (uint)lVar8 | uVar6;
          uVar6 = (uVar6 ^ uVar4) & 0xff000000 ^ uVar4;
          uVar4 = 0;
          if (param_5 != 0) {
            for (; (param_5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          this_00 = local_8;
        } while (param_5 != 0);
      }
      pvVar3 = local_c;
      this_00[2] = uVar6;
      this_00[3] = 0xffffffff;
      uVar4 = FUN_1001a1e9((void *)((int)local_c + 8),(int)local_44);
      if ((uVar4 == *(uint *)((int)pvVar3 + 0x10)) ||
         (uVar6 = FUN_10019cdc((void *)(*(int *)((int)pvVar3 + 0xc) + uVar4 * 0x40),local_44),
         (char)uVar6 == '\0')) {
        FUN_1001a11b((void *)((int)pvVar3 + 8),uVar4,local_44,&param_4);
        this_00 = param_4;
      }
      else {
        *(undefined4 **)(extraout_ECX_00 + 0x38) = this_00;
      }
    }
    else {
      this_00 = *(undefined4 **)(extraout_ECX + 0x38);
    }
    iVar5 = FUN_10019a99(this_00,param_2,param_3);
  }
  return iVar5;
}

