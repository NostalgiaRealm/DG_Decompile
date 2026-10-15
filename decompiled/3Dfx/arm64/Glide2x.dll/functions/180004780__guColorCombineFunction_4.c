/*
 * _guColorCombineFunction@4 at 180004780
 * undefined __cdecl _guColorCombineFunction@4(undefined4 param_1)
 * Address ranges: 180004780-1800048d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guColorCombineFunction_4(undefined4 param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  
                    /* 0x4780  108  _guColorCombineFunction@4
                       0x4780  265  guColorCombineFunction */
  cVar7 = '\0';
  switch(param_1) {
  case 0:
    lVar1 = FUN_180016878();
    uVar5 = 2;
    uVar3 = 0;
    uVar2 = 0;
    break;
  case 1:
    lVar1 = FUN_180016878();
    uVar5 = 2;
    uVar3 = 0;
    uVar2 = 1;
    break;
  case 3:
    cVar7 = '\x01';
  case 2:
    lVar1 = FUN_180016878();
    uVar6 = 0;
    uVar5 = 2;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 1;
    goto LAB_1800048cc;
  case 4:
    lVar1 = FUN_180016878();
    uVar3 = 8;
    goto LAB_1800047f8;
  case 5:
    lVar1 = FUN_180016878();
    uVar3 = 1;
    goto LAB_1800047f8;
  case 7:
    cVar7 = '\x01';
  case 6:
    lVar1 = FUN_180016878();
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = 3;
    goto LAB_1800048cc;
  case 8:
  case 0xf:
    lVar1 = FUN_180016878();
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = 5;
    goto LAB_1800048c8;
  case 9:
    lVar1 = FUN_180016878();
    uVar3 = 3;
LAB_1800047f8:
    uVar5 = 1;
    uVar2 = 3;
    break;
  case 10:
  case 0xe:
    lVar1 = FUN_180016878();
    uVar3 = 3;
    goto LAB_180004860;
  case 0xb:
    lVar1 = FUN_180016878();
    uVar3 = 8;
LAB_180004860:
    uVar4 = 0;
    uVar5 = 1;
    uVar6 = 0;
    uVar2 = 4;
    goto LAB_1800048c8;
  case 0xc:
    lVar1 = FUN_180016878();
    uVar6 = 0;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = 8;
    uVar2 = 6;
    goto LAB_1800048c8;
  case 0xd:
    lVar1 = FUN_180016878();
    uVar5 = 0;
    uVar3 = 4;
    uVar2 = 7;
    break;
  case 0x10:
    lVar1 = FUN_180016878();
    uVar6 = 1;
    uVar5 = 2;
    uVar3 = 0;
    uVar2 = 0;
    goto LAB_1800048c4;
  default:
    goto switchD_1800047a0_default;
  }
  uVar6 = 0;
LAB_1800048c4:
  uVar4 = 1;
LAB_1800048c8:
  cVar7 = '\0';
LAB_1800048cc:
  FUN_180018048(lVar1,uVar2,uVar3,uVar4,uVar5,uVar6,cVar7);
switchD_1800047a0_default:
  return;
}

