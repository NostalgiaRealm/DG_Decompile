/*
 * FUN_18003d10c at 18003d10c
 * undefined __fastcall FUN_18003d10c(ushort * param_1, ushort param_2)
 * Address ranges: 18003d10c-18003d3d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003d10c(ushort *param_1,ushort param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint *in_stack_00000038;
  longlong *in_stack_00000040;
  
  uVar4 = FUN_18003aa70((longlong)in_stack_00000038,*param_1,param_1[1],param_1[2],param_1[3],7,
                        '\x01');
  FUN_18003a434((longlong)in_stack_00000038,uVar4,7);
  if ((param_2 & 0xf0) == 0) {
    uVar9 = param_2 | 0x2000;
  }
  else {
    FUN_18003c7fc((int *)in_stack_00000038,in_stack_00000040,param_2,0xa4,uVar4,uVar4,7,0.01,'\x01')
    ;
    uVar9 = uVar4;
  }
  uVar5 = uVar4;
  if (uVar4 == 0) {
    uVar5 = FUN_18003aa70((longlong)in_stack_00000038,0,0,0,0,7,'\0');
  }
  FUN_18003a434((longlong)in_stack_00000038,uVar5,7);
  uVar7 = FUN_18003abbc((longlong)in_stack_00000038,(uint)uVar5,0xa4);
  FUN_18003a558((int *)in_stack_00000038,0,uVar9,(byte)uVar7,0,'\x01');
  uVar7 = FUN_18003abbc((longlong)in_stack_00000038,(uint)uVar5,0xe4);
  uVar6 = FUN_180054318(in_stack_00000038,in_stack_00000038 + 0x60,
                        (ulonglong)in_stack_00000038[0x14],0x40,(byte)uVar7,0,0);
  puVar1 = in_stack_00000038 + 0x57;
  puVar2 = in_stack_00000038 + 0x4f;
  puVar3 = in_stack_00000038 + 0x5f;
  *puVar3 = uVar6;
  FUN_18005538c(in_stack_00000040,
                (*puVar1 + *puVar2 + uVar6) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x20,puVar2,
                puVar1,puVar3,(uint *)0x0);
  if (uVar4 == 0) {
    FUN_18003ab80((longlong)in_stack_00000038,uVar5);
  }
  FUN_18003a434((longlong)in_stack_00000038,uVar4,1);
  FUN_18003a558((int *)in_stack_00000038,0,uVar4,0,0,'\0');
  FUN_18003a558((int *)in_stack_00000038,1,uVar4,0x55,0,'\0');
  uVar6 = (*puVar3 + *puVar1 + *puVar2) * 0x1000000 + 0x1000000 & 0x7f000000 | 1;
  FUN_18005538c(in_stack_00000040,uVar6,puVar2,puVar1,puVar3,(uint *)0x0);
  FUN_18003a558((int *)in_stack_00000038,1,uVar4,0xaa,0,'\0');
  uVar8 = (ulonglong)uVar6;
  FUN_18005538c(in_stack_00000040,uVar6,puVar2,puVar1,puVar3,(uint *)0x0);
  FUN_18003a9b8((longlong)in_stack_00000038,uVar8,(uint)uVar4,0);
  FUN_18005538c(in_stack_00000040,*puVar1 * 0x1000000 + 0x1000000 & 0x7f000000 | 0x4000d,puVar1,
                (uint *)0x0,(uint *)0x0,(uint *)0x0);
  FUN_18003ab80((longlong)in_stack_00000038,0);
  FUN_18003ab80((longlong)in_stack_00000038,uVar4);
  *(undefined1 *)(in_stack_00000038 + 0x2b) = 0;
  return;
}

