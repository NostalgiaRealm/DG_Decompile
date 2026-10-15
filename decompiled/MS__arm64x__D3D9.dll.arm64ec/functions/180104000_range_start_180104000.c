/*
 * range_start_180104000 at 180104000
 * undefined range_start_180104000(void)
 * Address ranges: 180104000-180104003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

void range_start_180104000(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  bool in_ZR;
  bool in_CY;
  int iVar5;
  uint *puVar6;
  undefined8 extraout_x1;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong unaff_x20;
  uint *unaff_x22;
  uint *puVar10;
  uint *unaff_x27;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  char in_stack_00000050;
  longlong in_stack_00000058;
  uint *in_stack_00000060;
  undefined8 in_stack_00000068;
  uint in_stack_00000070;
  undefined8 in_stack_00000078;
  uint *in_stack_00000080;
  undefined4 uStack0000000000000090;
  undefined1 uStack0000000000000094;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  uint *in_stack_000000b0;
  int iStack00000000000000c0;
  undefined1 uStack00000000000000c4;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined1 uStack00000000000000e4;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 uStack0000000000000100;
  undefined1 uStack0000000000000104;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 uStack0000000000000120;
  undefined1 uStack0000000000000124;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined4 uStack0000000000000140;
  undefined4 uStack0000000000000144;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined4 uStack0000000000000160;
  undefined1 uStack0000000000000164;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 uStack0000000000000190;
  undefined1 uStack0000000000000194;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined4 uStack00000000000001b0;
  undefined1 uStack00000000000001b4;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined4 uStack00000000000001d0;
  undefined1 uStack00000000000001d4;
  undefined4 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  undefined4 in_stack_000001f0;
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_18018c5a0:
  FUN_18018dcf8(param_1,param_2,param_3,param_4);
  FUN_180213800(unaff_x20 + 0x20,uStack0000000000000120);
switchD_18018b90c_caseD_3:
  do {
    lVar1 = in_stack_00000058;
    puVar10 = unaff_x22;
    if (*(int *)(in_stack_00000058 + 0x484) != -1) {
      uStack0000000000000140 = *(undefined4 *)(in_stack_00000058 + 0x2c4);
      uStack0000000000000144 =
           CONCAT31(uStack0000000000000144._1_3_,
                    (char)((uint)*(int *)(in_stack_00000058 + 0x484) >> 0x10));
      in_stack_00000158 = 0xffffffffffffffff;
      in_stack_00000150 = 0xffffffffffffffff;
      FUN_180214e10(in_stack_00000058 + 0x20,in_stack_00000068,0x37,in_stack_00000058 + 0x350);
      puVar7 = in_stack_00000080;
      FUN_180213800(lVar1 + 0x20,*in_stack_00000080);
      *puVar7 = 0;
    }
    while( true ) {
      puVar7 = in_stack_00000080;
      param_1 = in_stack_00000078;
      param_3 = in_stack_00000068;
      param_2 = in_stack_00000058;
      if (in_stack_00000050 != '\0') {
        return;
      }
      *(undefined4 *)(in_stack_00000058 + 0x484) = 0xffffffff;
      *in_stack_00000080 = 0;
      puVar6 = (uint *)FUN_180183070(in_stack_00000078,puVar10,in_stack_00000058,in_stack_00000068,
                                     &stack0x00000050);
      if (puVar6 == puVar10) break;
      puVar10 = puVar6;
      if (*(int *)(param_2 + 0x484) != -1) {
        uStack0000000000000090 = *(undefined4 *)(param_2 + 0x2c4);
        uStack0000000000000094 = (undefined1)((uint)*(int *)(param_2 + 0x484) >> 0x10);
        uStack00000000000000a8 = 0xffffffff;
        uStack00000000000000ac = 0xffffffff;
        uStack00000000000000a0 = 0xffffffff;
        uStack00000000000000a4 = 0xffffffff;
        FUN_180214e10(param_2 + 0x20,param_3,0x37,param_2 + 0x350);
        FUN_180213800(param_2 + 0x20,*(undefined4 *)(param_2 + 800));
        *puVar7 = 0;
      }
    }
    unaff_x22 = puVar10 + 1;
    in_stack_00000070 = *puVar10 & 0xffff;
    switch(in_stack_00000070) {
    case 0:
      unaff_x22 = puVar10 + 2;
      goto switchD_18018b90c_caseD_3;
    case 1:
      *(undefined4 *)(param_2 + 0x484) = 0;
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,1,0,param_2,param_3,0);
      uVar8 = *(uint *)(param_2 + 0x484);
      if ((uVar8 == 0xffffffff) || (uVar8 == 0)) {
        uVar8 = 0x1b;
        if (*in_stack_00000080 != *(uint *)(in_stack_00000058 + 0x238)) {
          uVar8 = 0x36;
        }
        FUN_18018dcf8(in_stack_00000078,in_stack_00000058,in_stack_00000068,
                      uVar8 | *(uint *)(in_stack_00000058 + 0x480));
      }
      else {
        uStack0000000000000090 = *(undefined4 *)(param_2 + 0x2c4);
        uStack00000000000000a8 = 0xffffffff;
        uStack00000000000000ac = 0xffffffff;
        uStack00000000000000a0 = 0xffffffff;
        uStack00000000000000a4 = 0xffffffff;
        uStack0000000000000094 = (undefined1)(uVar8 >> 0x10);
        FUN_180213268(0xe4,*(undefined1 *)(param_2 + 0x324));
        uVar2 = *(uint *)(param_2 + 0x480) | 0x37;
        if ((uVar8 & 0xf000000) == 0xd000000) {
          FUN_18018dcf8(param_1,param_2,param_3,uVar2);
        }
        else {
          FUN_18018dcf8(param_1,param_2,param_3,uVar2);
        }
      }
      *(undefined4 *)(in_stack_00000058 + 0x484) = 0xffffffff;
      goto switchD_18018b90c_caseD_3;
    case 2:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,2,0,param_2,param_3,0);
      FUN_18018dcf8(param_1,param_2,param_3,*(undefined4 *)(param_2 + 0x480));
    case 3:
    case 0x12:
      goto switchD_18018b90c_caseD_3;
    case 4:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,3,0,param_2,param_3,0);
      FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x32);
      goto switchD_18018b90c_caseD_3;
    case 5:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,2,0,param_2,param_3,0);
      FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x38);
      goto switchD_18018b90c_caseD_3;
    case 6:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,1,0,param_2,param_3,1);
      uStack0000000000000160 = FUN_180213760(param_2 + 0x20,4,0);
      uStack0000000000000164 = 2;
      in_stack_00000178 = 0xffffffffffffffff;
      in_stack_00000170 = 0xffffffffffffffff;
      iVar5 = FUN_180213038(*(undefined4 *)(param_2 + 0x20));
      if (iVar5 == 0x40) {
        uStack0000000000000090 = *(undefined4 *)(param_2 + 0xbc);
        uStack0000000000000094 = 0xe4;
        uStack00000000000000a0 = unaff_s8;
        uStack00000000000000a4 = unaff_s8;
        uStack00000000000000a8 = unaff_s8;
        uStack00000000000000ac = unaff_s8;
        FUN_180214e10(param_2 + 0x20,param_3,0xe,&stack0x00000160);
      }
      else {
        FUN_180214e10(param_2 + 0x20,param_3,0x81,&stack0x00000160);
      }
      uVar11 = in_stack_00000068;
      lVar1 = in_stack_00000058;
      uStack00000000000001d0 = *(undefined4 *)(in_stack_00000058 + 0xbc);
      uStack00000000000001d4 = 0xe4;
      in_stack_000001e0 = unaff_s9;
      in_stack_000001e8 = unaff_s9;
      FUN_180214e10(in_stack_00000058 + 0x20,in_stack_00000068,1,0x101);
      FUN_180214e10(lVar1 + 0x20,uVar11,0x20,0x101);
      FUN_18018dcf8(in_stack_00000078,lVar1,uVar11,*(uint *)(lVar1 + 0x480) | 0x37);
      goto switchD_18018b90c_caseD_3;
    case 7:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,1,0,param_2,param_3,1);
      uStack0000000000000190 = FUN_180213760(param_2 + 0x20,4,0);
      uStack0000000000000194 = 2;
      in_stack_000001a8 = 0xffffffffffffffff;
      in_stack_000001a0 = 0xffffffffffffffff;
      FUN_180214e10(param_2 + 0x20,param_3,0x44,&stack0x00000190);
      in_stack_000001f0 = *(undefined4 *)(param_2 + 0xbc);
      FUN_180214e10(param_2 + 0x20,param_3,0x20,0x101);
      FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x37);
      goto switchD_18018b90c_caseD_3;
    case 8:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,2,0,param_2,param_3,0);
      FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x10);
      goto switchD_18018b90c_caseD_3;
    case 9:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,2,0,param_2,param_3,0);
      FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x11);
      goto switchD_18018b90c_caseD_3;
    case 10:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,2,0,param_2,param_3,0);
      FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x33);
      goto switchD_18018b90c_caseD_3;
    case 0xb:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,2,0,param_2,param_3,0);
      FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x34);
      goto switchD_18018b90c_caseD_3;
    case 0xc:
    case 0xd:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,2,0,param_2,param_3,0);
      FUN_180213760(param_2 + 0x20,4,0);
      uVar9 = 0x1d;
      if (in_stack_00000070 != 0xd) {
        uVar9 = 0x31;
      }
      FUN_180214e10(param_2 + 0x20,param_3,uVar9,&stack0x000003b0);
      FUN_180213268(0xe4,*(undefined1 *)(param_2 + 0x324));
      FUN_180214e10(param_2 + 0x20,param_3,1,puVar7);
      goto switchD_18018b90c_caseD_3;
    case 0xe:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,1,0,param_2,param_3,
                                        *(char *)(*(longlong *)(param_2 + 0x10) + 0x4a6c) == '\x01')
      ;
      FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x19);
      goto switchD_18018b90c_caseD_3;
    case 0xf:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,1,0,param_2,param_3,1);
      uStack00000000000001b0 = FUN_180213760(param_2 + 0x20,4,0);
      uStack00000000000001b4 = 2;
      in_stack_000001c8 = 0xffffffffffffffff;
      in_stack_000001c0 = 0xffffffffffffffff;
      FUN_180214e10(param_2 + 0x20,param_3,0x2f,&stack0x000001b0);
      FUN_180214e10(param_2 + 0x20,param_3,0x20,0x101);
      FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x37);
      goto switchD_18018b90c_caseD_3;
    case 0x10:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,1,0,param_2,param_3,0);
      uStack0000000000000120 = FUN_180213760(param_2 + 0x20,4,1);
      uVar11 = 0xffffffffffffffff;
      uVar12 = 0xffffffffffffffff;
      uStack0000000000000124 = 0xf;
      in_stack_00000138 = 0xffffffffffffffff;
      in_stack_00000130 = 0xffffffffffffffff;
      uStack00000000000000e0 = FUN_180213760(param_2 + 0x20,extraout_x1,0);
      uStack00000000000000e4 = 3;
      in_stack_000000f0 = uVar11;
      in_stack_000000f8 = uVar12;
      FUN_180214e10(param_2 + 0x20,param_3,0x36,&stack0x00000120);
      FUN_180214e10(param_2 + 0x20,param_3,0x1d,&stack0x000000e0);
      FUN_180214e10(param_2 + 0x20,param_3,0x39,0x10c);
      FUN_180214e10(param_2 + 0x20,param_3,1,&stack0x000000e0);
      FUN_180214e10(param_2 + 0x20,param_3,0x33,0x108);
      FUN_180214e10(param_2 + 0x20,param_3,0x34,0x108);
      FUN_180214e10(param_2 + 0x20,param_3,0x2f,0x104);
      FUN_180214e10(param_2 + 0x20,param_3,0x38,0x104);
      FUN_180214e10(param_2 + 0x20,param_3,0x19,0x104);
      FUN_180214e10(param_2 + 0x20,param_3,0x36,0x10c);
      FUN_180214e10(param_2 + 0x20,param_3,1,0x102);
      FUN_180214e10(param_2 + 0x20,param_3,1,0x103);
      param_4 = (ulonglong)(*(uint *)(param_2 + 0x480) | 0x36);
      unaff_x20 = param_2;
      goto LAB_18018c5a0;
    case 0x11:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,2,0,param_2,param_3,0);
      uVar8 = *puVar7;
      if ((((uVar8 >> 0x1e & 1) == 0) && (uVar8 != *unaff_x27)) && (uVar8 != *in_stack_00000060)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        uStack0000000000000140 = FUN_180213760(in_stack_00000058 + 0x20,4,0);
        uStack0000000000000144 = CONCAT31(uStack0000000000000144._1_3_,0xe4);
      }
      if ((puVar10[1] >> 0x10 & 1) != 0) {
        uStack0000000000000090 = *(undefined4 *)(in_stack_00000058 + 0xb8);
        uStack0000000000000094 = 0xe4;
        uStack00000000000000a4 = 0xffffffff;
        uStack00000000000000a8 = 0xffffffff;
        uStack00000000000000ac = 0xffffffff;
        uStack00000000000000a0 = unaff_s8;
        FUN_180214e10(in_stack_00000058 + 0x20,in_stack_00000068,0x36,0x101);
      }
      if ((puVar10[1] >> 0x11 & 1) != 0) {
        if (bVar3) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(in_stack_00000058 + 0x480);
        }
        FUN_18018dcf8(in_stack_00000078,in_stack_00000058,in_stack_00000068,uVar8 | 0x38);
      }
      if ((puVar10[1] >> 0x12 & 1) != 0) {
        if (bVar3) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(in_stack_00000058 + 0x480);
        }
        FUN_18018dcf8(in_stack_00000078,in_stack_00000058,in_stack_00000068,uVar8 | 0x36);
      }
      if ((puVar10[1] >> 0x13 & 1) != 0) {
        if (bVar3) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(in_stack_00000058 + 0x480);
        }
        FUN_18018dcf8(in_stack_00000078,in_stack_00000058,in_stack_00000068,uVar8 | 0x36);
      }
      if (bVar3) {
        FUN_18018dcf8(in_stack_00000078,in_stack_00000058,in_stack_00000068,
                      *(uint *)(in_stack_00000058 + 0x480) | 0x36);
      }
      goto switchD_18018b90c_caseD_3;
    case 0x13:
      unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,1,0,param_2,param_3,0);
      FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x1a);
      goto switchD_18018b90c_caseD_3;
    case 0x14:
    case 0x15:
      in_stack_000000b0 = unaff_x22;
      if ((puVar10[1] >> 0x10 & 1) != 0) {
        unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0x10000,2,0,param_2,param_3,0);
        puVar6 = (uint *)FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x11);
      }
      uVar11 = in_stack_00000068;
      lVar1 = in_stack_00000058;
      if ((puVar10[1] >> 0x11 & 1) != 0) {
        unaff_x22 = (uint *)FUN_18018b280(puVar6,in_stack_000000b0,0x20000,2,1,in_stack_00000058,
                                          in_stack_00000068,0);
        puVar6 = (uint *)FUN_18018dcf8(in_stack_00000078,lVar1,uVar11,
                                       *(uint *)(lVar1 + 0x480) | 0x11);
      }
      uVar11 = in_stack_00000068;
      lVar4 = in_stack_00000058;
      if ((puVar10[1] >> 0x12 & 1) != 0) {
        unaff_x22 = (uint *)FUN_18018b280(puVar6,in_stack_000000b0,0x40000,2,2,in_stack_00000058,
                                          in_stack_00000068,0);
        puVar6 = (uint *)FUN_18018dcf8(in_stack_00000078,lVar4,uVar11,
                                       *(uint *)(lVar1 + 0x480) | 0x11);
      }
      uVar11 = in_stack_00000068;
      lVar4 = in_stack_00000058;
      if (((puVar10[1] >> 0x13 & 1) != 0) && (in_stack_00000070 == 0x14)) {
        unaff_x22 = (uint *)FUN_18018b280(puVar6,in_stack_000000b0,0x80000,2,3,in_stack_00000058,
                                          in_stack_00000068,0);
        FUN_18018dcf8(in_stack_00000078,lVar4,uVar11,*(uint *)(lVar1 + 0x480) | 0x11);
      }
      goto switchD_18018b90c_caseD_3;
    case 0x16:
    case 0x17:
    case 0x18:
      in_stack_000000b0 = unaff_x22;
      if ((puVar10[1] >> 0x10 & 1) != 0) {
        unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0x10000,2,0,param_2,param_3,0);
        puVar6 = (uint *)FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x10);
      }
      uVar11 = in_stack_00000068;
      lVar1 = in_stack_00000058;
      if ((puVar10[1] >> 0x11 & 1) != 0) {
        unaff_x22 = (uint *)FUN_18018b280(puVar6,in_stack_000000b0,0x20000,2,1,in_stack_00000058,
                                          in_stack_00000068,0);
        puVar6 = (uint *)FUN_18018dcf8(in_stack_00000078,lVar1,uVar11,
                                       *(uint *)(lVar1 + 0x480) | 0x10);
      }
      lVar4 = in_stack_00000058;
      if (((puVar10[1] >> 0x12 & 1) != 0) &&
         ((in_stack_00000070 == 0x17 || (lVar1 = in_stack_00000058, in_stack_00000070 == 0x16)))) {
        unaff_x22 = (uint *)FUN_18018b280(puVar6,in_stack_000000b0,0x40000,2,2,in_stack_00000058,
                                          in_stack_00000068,0);
        puVar6 = (uint *)FUN_18018dcf8(in_stack_00000078,lVar4,in_stack_00000068,
                                       *(uint *)(lVar1 + 0x480) | 0x10);
      }
      uVar11 = in_stack_00000068;
      lVar1 = in_stack_00000058;
      if (((puVar10[1] >> 0x13 & 1) != 0) && (in_stack_00000070 == 0x16)) {
        unaff_x22 = (uint *)FUN_18018b280(puVar6,in_stack_000000b0,0x80000,2,3,in_stack_00000058,
                                          in_stack_00000068,0);
        FUN_18018dcf8(in_stack_00000078,lVar1,uVar11,*(uint *)(lVar1 + 0x480) | 0x10);
      }
      goto switchD_18018b90c_caseD_3;
    default:
      if (in_stack_00000070 == 0x4e) {
        uVar2 = puVar10[1];
        unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,1,0,param_2,param_3,
                                          *(char *)(*(longlong *)(param_2 + 0x10) + 0x4a6c) ==
                                          '\x01');
        iStack00000000000000c0 = 0;
        uStack00000000000000c4 = 0;
        in_stack_000000d8 = 0xffffffffffffffff;
        in_stack_000000d0 = 0xffffffffffffffff;
        uVar8 = uVar2 & 0x80000;
        if ((uVar2 & 0x50000) == 0) {
          if (uVar8 != 0) {
            uStack0000000000000090 = *(undefined4 *)(param_2 + 0xb8);
            uStack00000000000000ac = 0xffffffff;
            uStack0000000000000094 = 0xe4;
            uStack00000000000000a4 = 0xffffffff;
            uStack00000000000000a8 = 0xffffffff;
            uStack00000000000000a0 = unaff_s8;
            FUN_180214e10(param_2 + 0x20,param_3,0x36,0x108);
          }
        }
        else {
          iStack00000000000000c0 = FUN_180213760(param_2 + 0x20,4,0);
          uStack00000000000000c4 = 0xf;
          lVar1 = param_2 + 0x20;
          in_stack_000000d0 = 0xffffffffffffffff;
          in_stack_000000d8 = 0xffffffffffffffff;
          if (uVar8 == 0) {
            FUN_180214e10(lVar1,param_3,0x36,&stack0x000000c0);
          }
          else if ((*unaff_x27 & 0x88000000) == 0) {
            uStack0000000000000090 = *(undefined4 *)(param_2 + 0xbc);
            uStack00000000000000a0 = 0xffffffff;
            uStack00000000000000a4 = 0xffffffff;
            uStack00000000000000a8 = 0xffffffff;
            uStack00000000000000ac = 0;
            uStack0000000000000094 = 0xe4;
            FUN_180214e10(lVar1,param_3,1,&stack0x000000c0);
          }
          else {
            uStack0000000000000090 = *(undefined4 *)(param_2 + 0xb8);
            uStack00000000000000a0 = 0;
            uStack00000000000000a4 = 0xffffffff;
            uStack00000000000000a8 = 0xffffffff;
            uStack00000000000000ac = 0xffffffff;
            uStack0000000000000094 = 0xe4;
            FUN_180214e10(lVar1,param_3,0x36,0x107);
            FUN_180214e10(param_2 + 0x20,param_3,0x36,0x108);
          }
          if ((uVar2 >> 0x10 & 1) != 0) {
            FUN_180214e10(in_stack_00000058 + 0x20,in_stack_00000068,0x41,0x101);
          }
          FUN_18018dcf8(in_stack_00000078,in_stack_00000058,in_stack_00000068,
                        *(uint *)(in_stack_00000058 + 0x480) | 0x19);
        }
        if ((uVar2 >> 0x11 & 1) != 0) {
          if (iStack00000000000000c0 == 0) {
            iStack00000000000000c0 = FUN_180213760(in_stack_00000058 + 0x20,4,0);
            uStack00000000000000c4 = 0xf;
            in_stack_000000d0 = 0xffffffffffffffff;
            in_stack_000000d8 = 0xffffffffffffffff;
          }
          uVar11 = in_stack_00000068;
          lVar1 = in_stack_00000058;
          uStack0000000000000094 = 0xe4;
          uStack0000000000000144 = CONCAT31(uStack0000000000000144._1_3_,0xe4);
          uStack00000000000000a8 = 0x7fffffff;
          uStack00000000000000ac = 0x7fffffff;
          uStack00000000000000a0 = 0x7fffffff;
          uStack00000000000000a4 = 0x7fffffff;
          uStack0000000000000090 = *(undefined4 *)(in_stack_00000058 + 0xbc);
          in_stack_00000158 = 0x7f8000007f800000;
          in_stack_00000150 = 0x7f8000007f800000;
          uStack0000000000000140 = uStack0000000000000090;
          FUN_180214e10(in_stack_00000058 + 0x20,in_stack_00000068,1,0x102);
          FUN_180214e10(lVar1 + 0x20,uVar11,0x27,0x102);
          FUN_180214e10(lVar1 + 0x20,uVar11,1,0x102);
          FUN_180214e10(lVar1 + 0x20,uVar11,0x1a,0x102);
        }
        goto switchD_18018b90c_caseD_3;
      }
      if (in_stack_00000070 == 0x4f) {
        unaff_x22 = (uint *)FUN_18018b280(puVar6,unaff_x22,0xf0000,1,0,param_2,param_3,1);
        uStack0000000000000100 = FUN_180213760(param_2 + 0x20,4,0);
        uStack0000000000000104 = 0xf;
        in_stack_00000118 = 0xffffffffffffffff;
        in_stack_00000110 = 0xffffffffffffffff;
        FUN_180214e10(param_2 + 0x20,param_3,0x36,&stack0x00000100);
        FUN_180214e10(param_2 + 0x20,param_3,0x39,0x108);
        FUN_180214e10(param_2 + 0x20,param_3,0x55,0x101);
        FUN_180214e10(param_2 + 0x20,param_3,0x2f,0x104);
        FUN_180214e10(param_2 + 0x20,param_3,1,0x10e);
        FUN_180214e10(param_2 + 0x20,param_3,0x3c,0x102);
        FUN_180214e10(param_2 + 0x20,param_3,0x1e,0x101);
        FUN_180214e10(param_2 + 0x20,param_3,0x2b,0x101);
        FUN_18018dcf8(param_1,param_2,param_3,*(uint *)(param_2 + 0x480) | 0x37);
        goto switchD_18018b90c_caseD_3;
      }
      if (in_stack_00000070 == 0x51) {
        unaff_x22 = puVar10 + 6;
        goto switchD_18018b90c_caseD_3;
      }
      if (in_stack_00000070 == 0xfffe) {
        unaff_x22 = puVar10 + (ulonglong)(*puVar10 >> 0x10) + 1;
        goto switchD_18018b90c_caseD_3;
      }
      if (in_stack_00000070 != 0xffff) goto switchD_18018b90c_caseD_3;
      in_stack_00000050 = '\x01';
    }
  } while( true );
}

