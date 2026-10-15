/*
 * FUN_180040968 at 180040968
 * undefined __cdecl FUN_180040968(ushort * param_1, uint param_2)
 * Address ranges: 180040968-180040c1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040968(ushort *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined8 extraout_x1;
  int *in_x6;
  longlong *in_x7;
  longlong extraout_x14;
  longlong extraout_x14_00;
  uint uVar7;
  undefined1 auVar8 [12];
  
  uVar1 = FUN_18003e8e0((longlong)in_x6,(uint)*param_1,(uint)param_1[1],(uint)param_1[2],
                        (uint)param_1[3],7,1);
  uVar7 = uVar1 & 0xffff;
  piVar6 = (int *)FUN_18003e308((longlong)in_x6,uVar1 & 0xffff,7);
  if ((param_2 & 0xf0) == 0) {
    uVar4 = param_2 | 0x2000;
  }
  else {
    FUN_180040218(piVar6,in_x7,param_2,0xa4,uVar1 & 0xffff,uVar1 & 0xffff,7,1);
    uVar4 = uVar7;
  }
  uVar2 = uVar7;
  if (uVar7 == 0) {
    uVar2 = FUN_18003e8e0((longlong)in_x6,0,0,0,0,7,0);
  }
  auVar8 = FUN_18003e308((longlong)in_x6,uVar2,7);
  uVar3 = FUN_18003e9f8(auVar8._0_8_,auVar8._8_4_,0xa4);
  FUN_18003e3e8(in_x6,0,uVar4,(byte)uVar3,0,1);
  uVar4 = FUN_18003e9f8((longlong)in_x6,uVar2,0xe4);
  iVar5 = FUN_180056c68(in_x6,(uint *)(in_x6 + 0x60),in_x6[0x14],0x40,(byte)uVar4,0,0);
  in_x6[0x5f] = iVar5;
  FUN_180057c58(in_x7,(in_x6[0x57] + in_x6[0x4f] + iVar5) * 0x1000000 + 0x1000000U & 0x7f000000 |
                      0x20,(uint *)(in_x6 + 0x4f),(uint *)(in_x6 + 0x57),(uint *)(in_x6 + 0x5f),
                (uint *)0x0);
  if ((uVar7 == 0) && ((uVar2 & 0xf0) == 0x80)) {
    FUN_180056c30((longlong)in_x6,in_x6[(ulonglong)(uVar2 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14 + 0x98) = 0;
  }
  piVar6 = (int *)FUN_18003e308((longlong)in_x6,uVar7,1);
  FUN_18003e3e8(piVar6,0,uVar7,0,0,0);
  FUN_18003e3e8(in_x6,1,uVar7,0x55,0,0);
  uVar4 = (in_x6[0x5f] + in_x6[0x57] + in_x6[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 | 1;
  FUN_180057c58(in_x7,uVar4,(uint *)(in_x6 + 0x4f),(uint *)(in_x6 + 0x57),(uint *)(in_x6 + 0x5f),
                (uint *)0x0);
  FUN_18003e3e8(in_x6,1,uVar7,0xaa,0,0);
  FUN_180057c58(in_x7,uVar4,(uint *)(in_x6 + 0x4f),(uint *)(in_x6 + 0x57),(uint *)(in_x6 + 0x5f),
                (uint *)0x0);
  FUN_18003e850((longlong)in_x6,extraout_x1,uVar7,0);
  FUN_180057c58(in_x7,in_x6[0x57] * 0x1000000 + 0x1000000U & 0x7f000000 | 0x4000d,
                (uint *)(in_x6 + 0x57),(uint *)0x0,(uint *)0x0,(uint *)0x0);
  if ((uVar1 & 0xf0) == 0x80) {
    FUN_180056c30((longlong)in_x6,in_x6[(ulonglong)(uVar1 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14_00 + 0x98) = 0;
  }
  *(undefined1 *)(in_x6 + 0x2b) = 0;
  return;
}

