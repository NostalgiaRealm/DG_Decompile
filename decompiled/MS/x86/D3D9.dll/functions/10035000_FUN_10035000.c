/*
 * FUN_10035000 at 10035000
 * undefined __thiscall FUN_10035000(void * this, int param_1, undefined4 param_2, undefined4 param_3, int * param_4)
 * Address ranges: 10035000-1003523d;1003524d-100354db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Switch with 1 destination removed at 0x10035237 */
/* WARNING: Exceeded maximum restarts with more pending */

void __thiscall
FUN_10035000(void *this,int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 local_f18 [1792];
  undefined1 local_818 [600];
  undefined1 *local_5c0;
  undefined4 local_5bc;
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined4 local_5ac;
  int local_5a8 [12];
  undefined1 *local_578;
  undefined2 local_574;
  int local_570 [5];
  undefined1 local_55a [66];
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  int local_500 [29];
  char acStack_48a [106];
  undefined1 *local_420;
  char local_40d;
  undefined1 local_140 [72];
  uint local_f8;
  uint local_f4;
  uint local_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  uint local_b4;
  uint local_b0 [7];
  undefined4 auStack_94 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined1 local_44;
  int *local_3c;
  undefined4 *local_38;
  uint local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  
  local_30 = param_1 * 0x18;
  iVar2 = *(int *)this;
  *(undefined4 *)(local_30 + iVar2) = param_2;
  *(undefined4 *)(local_30 + 4 + iVar2) = param_3;
  iVar2 = *(int *)this;
  *(undefined8 *)(local_30 + iVar2 + 8) = *(undefined8 *)param_4;
  *(int *)(local_30 + iVar2 + 0x10) = param_4[2];
  local_18 = *param_4;
  local_3c = this;
  local_2c = FUN_10057dc0(*param_4,(int)local_f18,(char)param_4[2]);
  local_1c = 0;
  local_38 = (undefined4 *)(*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) * 0x1510 + 0x510)
  ;
  if (*(int *)(local_18 + 4) == 0) {
    (**(code **)(*(int *)*local_38 + 0x2c))
              ((int *)*local_38,local_f18,local_2c,
               *(undefined4 *)(*(int *)((int)this + 0x14) + param_4[1] * 4),
               *(undefined4 *)(*(int *)((int)this + 0x18) + param_4[1] * 4),&local_1c);
    iVar2 = *(int *)this;
  }
  else {
    local_20 = *(uint *)(local_18 + 8);
    local_28 = 0;
    uVar5 = 0;
    local_28._4_4_ = 0;
    local_14 = 0;
    local_f4 = local_28._4_4_;
    uVar3 = local_28._4_4_;
    if (local_20 != 0) {
      do {
        lVar7 = __allshl(*(char *)(local_18 + 0x214 + uVar5) << 2,0);
        local_14 = local_14 | (uint)lVar7;
        local_f4 = uVar3 | (uint)((ulonglong)lVar7 >> 0x20);
        uVar5 = uVar5 + 1;
        uVar3 = local_f4;
      } while (uVar5 < local_20);
    }
    local_48 = 0x200;
    local_44 = 1;
    puVar1 = (undefined4 *)FUN_100cfd89(0x200);
    local_5c0 = local_818;
    local_5bc = local_54;
    local_5b8 = 0;
    local_5b0 = 0;
    local_5ac = 0;
    local_50 = puVar1;
    FUN_100cfed0(local_570,0,0x430);
    FUN_1004e653(local_140);
    local_f8 = local_14;
    FUN_100cfed0(local_500,0,0xf8);
    local_40d = '\x01';
    local_420 = local_140;
    FUN_100cfed0(local_5a8,0,0x38);
    local_5a8[0] = 0x10040;
    local_578 = local_55a;
    local_574 = 0x40;
    local_500[3] = 0x110800;
    local_500[2] = 0x210800;
    local_500[1] = 0x310800;
    local_500[0] = 0x410800;
    local_500[4] = 0x410802;
    local_518 = 0x110400;
    local_514 = 0x410400;
    local_510 = 0x20000d00;
    if (local_40d != '\0') {
      cVar4 = '\0';
      uVar3 = 0;
      do {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        acStack_48a[uVar3] = cVar4;
        cVar4 = cVar4 + '\x01';
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x11);
    }
    *puVar1 = 0x43425844;
    local_4c = puVar1 + 9;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 1;
    puVar1[6] = 0;
    puVar1[7] = 1;
    puVar1[8] = 0x24;
    FUN_1006bdf6(&local_50,(int)&local_5c0,0);
    iVar2 = (int)local_4c - (int)local_50;
    local_b0[1] = 0;
    local_28 = CONCAT44(iVar2,(undefined4)local_28);
    local_50[6] = iVar2;
    puVar1 = local_50 + 5;
    local_b0[0] = 0;
    local_14 = iVar2 - 0x14;
    local_b0[2] = 0x67452301;
    local_34 = local_14 * 8;
    uVar3 = local_14 & 0xffffffc0;
    local_b0[3] = 0xefcdab89;
    local_b0[4] = 0x98badcfe;
    local_b0[5] = 0x10325476;
    local_20 = local_34;
    FUN_100caf34(local_b0,(undefined1 *)puVar1,uVar3);
    local_14 = local_14 - uVar3;
    local_18 = 0x40 - local_14;
    puVar6 = (undefined1 *)((int)puVar1 + uVar3);
    if (local_14 < 0x38) {
      FUN_100caf34(local_b0,(undefined1 *)&local_34,4);
      uVar3 = local_14;
      if (local_14 != 0) {
        FUN_100caf34(local_b0,puVar6,local_14);
      }
      FUN_100cff00((undefined4 *)((int)auStack_94 + uVar3),(undefined4 *)&DAT_100de7d8,local_18 - 4)
      ;
      local_f0 = local_b0[6];
      uStack_ec = CONCAT44(auStack_94[1],auStack_94[0]);
      local_b4 = (local_20 | 4) >> 2;
      uStack_b8 = local_60;
      uStack_e4 = CONCAT44(auStack_94[3],auStack_94[2]);
      uStack_dc = CONCAT44(uStack_80,uStack_84);
      uStack_d4 = CONCAT44(local_78,uStack_7c);
      uStack_cc = CONCAT44(uStack_70,uStack_74);
      local_c4 = uStack_6c;
      uStack_c0 = (undefined4)local_68;
      local_bc = (undefined4)((ulonglong)local_68 >> 0x20);
      local_5c = local_b4;
    }
    else {
      FUN_100caf34(local_b0,puVar6,local_14);
      FUN_100caf34(local_b0,&DAT_100de7d8,local_18);
      local_f0 = local_20;
      uStack_ec = 0;
      local_b4 = (local_20 | 4) >> 2;
      uStack_e4 = 0;
      uStack_dc = 0;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_c4 = 0;
      uStack_c0 = 0;
      local_bc = 0;
      uStack_b8 = 0;
    }
    FUN_100ca7fb((int *)(local_b0 + 2),(int *)&local_f0);
    puVar1 = local_50;
    local_50[1] = local_b0[2];
    local_50[2] = local_b0[3];
    local_50[3] = local_b0[4];
    local_50[4] = local_b0[5];
    (**(code **)(*(int *)*local_38 + 0x2c))
              ((int *)*local_38,local_f18,local_2c,local_50,local_28._4_4_,&local_1c);
    thunk_FUN_100cfd6c(puVar1);
    iVar2 = *local_3c;
  }
  *(undefined4 *)(local_30 + 0x14 + iVar2) = local_1c;
  return;
}

