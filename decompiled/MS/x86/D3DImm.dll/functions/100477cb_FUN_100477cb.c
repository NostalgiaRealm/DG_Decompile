/*
 * FUN_100477cb at 100477cb
 * undefined __fastcall FUN_100477cb(int param_1)
 * Address ranges: 100477cb-10047c31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100477cb(int param_1)

{
  float *extraout_ECX;
  float *extraout_EDX;
  float *extraout_EDX_00;
  float *extraout_EDX_01;
  float *extraout_EDX_02;
  float *extraout_EDX_03;
  float *extraout_EDX_04;
  float *extraout_EDX_05;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [4];
  float local_98 [4];
  float local_88 [4];
  float local_78 [4];
  float local_68 [4];
  float local_58 [4];
  int local_48 [10];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(char *)(param_1 + 0x90c) == '\0') {
    FUN_10008d18(param_1);
    FUN_10013790((void *)(*(int *)(param_1 + 0x9cc) + 0x40),local_48,param_1 + 0x964);
    fVar1 = local_10;
    if (local_10 < 0.0) {
      fVar1 = -local_10;
    }
    fVar4 = local_c;
    fVar5 = 0.0;
    if (1e-05 < fVar1) {
      fVar4 = local_10;
      fVar5 = local_c;
    }
    local_d4 = 0.0;
    fVar1 = local_14 * 0.0 + local_18 * 0.0;
    fVar7 = (fVar1 - ((local_1c / fVar4) / (local_20 / fVar4)) * local_10) + local_c;
    uVar6 = 0x80000000;
    local_c = (fVar1 - ((local_1c / fVar4) / (local_20 / fVar4 - 1.0)) * local_10) + local_c;
    fVar2 = -fVar7;
    fVar3 = (local_c / fVar7 - 1.0) * (fVar5 / fVar4) + local_c;
    fVar1 = fVar3;
    fVar4 = fVar3;
    fVar5 = fVar3;
    local_dc = fVar2;
    local_d8 = fVar2;
    local_d0 = fVar7;
    FUN_1001365e(&local_dc,&local_b8,(float *)(*(int *)(param_1 + 0x9cc) + 0x880));
    local_d4 = 0.0;
    local_dc = fVar2;
    local_d8 = fVar7;
    local_d0 = fVar7;
    FUN_1001365e(&local_dc,local_a8,extraout_EDX);
    local_d4 = 0.0;
    local_dc = fVar7;
    local_d8 = fVar7;
    local_d0 = fVar7;
    FUN_1001365e(&local_dc,local_58,extraout_EDX_00);
    local_d4 = 0.0;
    local_dc = fVar7;
    local_d8 = fVar2;
    local_d0 = fVar7;
    FUN_1001365e(&local_dc,local_68,extraout_EDX_01);
    fVar2 = (float)((uint)fVar3 ^ uVar6);
    local_dc = fVar2;
    local_d8 = fVar2;
    local_d4 = fVar3;
    local_d0 = fVar3;
    FUN_1001365e(&local_dc,local_98,extraout_EDX_02);
    local_dc = fVar2;
    local_d8 = fVar3;
    local_d4 = fVar3;
    local_d0 = fVar3;
    FUN_1001365e(&local_dc,local_88,extraout_EDX_03);
    local_cc = fVar3;
    fStack_c8 = fVar1;
    fStack_c4 = fVar4;
    fStack_c0 = fVar5;
    FUN_1001365e(&local_cc,&local_dc,extraout_EDX_04);
    local_cc = fVar3;
    fStack_c8 = fVar2;
    fStack_c4 = fVar3;
    fStack_c0 = fVar3;
    FUN_1001365e(&local_cc,local_78,extraout_EDX_05);
    local_cc = (local_dc + local_b8) * 0.5;
    fStack_c8 = (local_d8 + local_b4) * 0.5;
    fStack_c4 = (local_d4 + local_b0) * 0.5;
    fStack_c0 = (local_d0 + local_ac) * 0.5;
    FUN_100136e8(&local_b8);
    FUN_100136e8(local_a8);
    FUN_100136e8(local_58);
    FUN_100136e8(local_68);
    FUN_100136e8(local_98);
    FUN_100136e8(local_88);
    FUN_100136e8(&local_dc);
    FUN_100136e8(local_78);
    FUN_100136e8(&local_cc);
    FUN_10047c32(local_88,local_a8,local_98,extraout_ECX,(float *)(param_1 + 0x1758),
                 (float *)(param_1 + 0x175c),(float *)(param_1 + 0x1760),(float *)(param_1 + 0x1764)
                );
    FUN_10047c32(local_78,local_68,&local_dc,&local_cc,(float *)(param_1 + 0x1768),
                 (float *)(param_1 + 0x176c),(float *)(param_1 + 6000),(float *)(param_1 + 0x1774));
    FUN_10047c32(local_88,&local_dc,local_a8,&local_cc,(float *)(param_1 + 0x1778),
                 (float *)(param_1 + 0x177c),(float *)(param_1 + 0x1780),(float *)(param_1 + 0x1784)
                );
    FUN_10047c32(local_98,&local_b8,local_78,&local_cc,(float *)(param_1 + 0x1788),
                 (float *)(param_1 + 0x178c),(float *)(param_1 + 0x1790),(float *)(param_1 + 0x1794)
                );
    FUN_10047c32(local_a8,local_58,&local_b8,&local_cc,(float *)(param_1 + 0x1798),
                 (float *)(param_1 + 0x179c),(float *)(param_1 + 0x17a0),(float *)(param_1 + 0x17a4)
                );
    FUN_10047c32(local_88,local_98,&local_dc,&local_cc,(float *)(param_1 + 0x17a8),
                 (float *)(param_1 + 0x17ac),(float *)(param_1 + 0x17b0),(float *)(param_1 + 0x17b4)
                );
    *(undefined1 *)(param_1 + 0x90c) = 1;
  }
  return;
}

