
3Dfx/arm64/Glide.dll signature 0x5d5d0
0005d558: 20008052           mov w0, #1
0005d55c: fbffff17           b #0x5d548
0005d560: 3f200071           cmp w1, #8
0005d564: c3020054           b.lo #0x5d5bc
0005d568: 09008052           mov w9, #0
0005d56c: 2c200051           sub w12, w1, #8
0005d570: 6c020034           cbz w12, #0x5d5bc
0005d574: 6a0000f0           adrp x10, #0x6c000
0005d578: 4a811391           add x10, x10, #0x4e0
0005d57c: ad020018           ldr w13, #0x5d5d0
0005d580: 0f100091           add x15, x0, #4
0005d584: 8e020018           ldr w14, #0x5d5d4
0005d588: 4b0d40b9           ldr w11, [x10, #0xc]
0005d58c: 084869b8           ldr w8, [x0, w9, uxtw]
0005d590: 08010b0b           add w8, w8, w11
0005d594: 1f010d6b           cmp w8, w13
0005d598: c1000054           b.ne #0x5d5b0
0005d59c: 4b0140b9           ldr w11, [x10]
0005d5a0: e84969b8           ldr w8, [x15, w9, uxtw]
0005d5a4: 08010b0b           add w8, w8, w11
0005d5a8: 1f010e6b           cmp w8, w14
0005d5ac: c0000054           b.eq #0x5d5c4
0005d5b0: 29050011           add w9, w9, #1
0005d5b4: 3f010c6b           cmp w9, w12
0005d5b8: 83feff54           b.lo #0x5d588
0005d5bc: 00008052           mov w0, #0
0005d5c0: c0035fd6           ret 
0005d5c4: 20008052           mov w0, #1
0005d5c8: feffff17           b #0x5d5c0
0005d5cc: 1f2003d5           nop 
0005d5d0: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
0005d5d4: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
0005d5d8: f353bca9           stp x19, x20, [sp, #-0x40]!
0005d5dc: f55b01a9           stp x21, x22, [sp, #0x10]

3Dfx/arm64/Glide2x.dll signature 0x5c780
0005c708: 20008052           mov w0, #1
0005c70c: fbffff17           b #0x5c6f8
0005c710: 3f200071           cmp w1, #8
0005c714: c3020054           b.lo #0x5c76c
0005c718: 09008052           mov w9, #0
0005c71c: 2c200051           sub w12, w1, #8
0005c720: 6c020034           cbz w12, #0x5c76c
0005c724: 6a0000f0           adrp x10, #0x6b000
0005c728: 4a811391           add x10, x10, #0x4e0
0005c72c: ad020018           ldr w13, #0x5c780
0005c730: 0f100091           add x15, x0, #4
0005c734: 8e020018           ldr w14, #0x5c784
0005c738: 4b0d40b9           ldr w11, [x10, #0xc]
0005c73c: 084869b8           ldr w8, [x0, w9, uxtw]
0005c740: 08010b0b           add w8, w8, w11
0005c744: 1f010d6b           cmp w8, w13
0005c748: c1000054           b.ne #0x5c760
0005c74c: 4b0140b9           ldr w11, [x10]
0005c750: e84969b8           ldr w8, [x15, w9, uxtw]
0005c754: 08010b0b           add w8, w8, w11
0005c758: 1f010e6b           cmp w8, w14
0005c75c: c0000054           b.eq #0x5c774
0005c760: 29050011           add w9, w9, #1
0005c764: 3f010c6b           cmp w9, w12
0005c768: 83feff54           b.lo #0x5c738
0005c76c: 00008052           mov w0, #0
0005c770: c0035fd6           ret 
0005c774: 20008052           mov w0, #1
0005c778: feffff17           b #0x5c770
0005c77c: 1f2003d5           nop 
0005c780: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
0005c784: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
0005c788: f353bca9           stp x19, x20, [sp, #-0x40]!
0005c78c: f55b01a9           stp x21, x22, [sp, #0x10]

3Dfx/arm64/Glide3x.dll signature 0x60050
0005ffd8: 20008052           mov w0, #1
0005ffdc: fbffff17           b #0x5ffc8
0005ffe0: 3f200071           cmp w1, #8
0005ffe4: c3020054           b.lo #0x6003c
0005ffe8: 09008052           mov w9, #0
0005ffec: 2c200051           sub w12, w1, #8
0005fff0: 6c020034           cbz w12, #0x6003c
0005fff4: 8a000090           adrp x10, #0x6f000
0005fff8: 4ac11891           add x10, x10, #0x630
0005fffc: ad020018           ldr w13, #0x60050
00060000: 0f100091           add x15, x0, #4
00060004: 8e020018           ldr w14, #0x60054
00060008: 4b0d40b9           ldr w11, [x10, #0xc]
0006000c: 084869b8           ldr w8, [x0, w9, uxtw]
00060010: 08010b0b           add w8, w8, w11
00060014: 1f010d6b           cmp w8, w13
00060018: c1000054           b.ne #0x60030
0006001c: 4b0140b9           ldr w11, [x10]
00060020: e84969b8           ldr w8, [x15, w9, uxtw]
00060024: 08010b0b           add w8, w8, w11
00060028: 1f010e6b           cmp w8, w14
0006002c: c0000054           b.eq #0x60044
00060030: 29050011           add w9, w9, #1
00060034: 3f010c6b           cmp w9, w12
00060038: 83feff54           b.lo #0x60008
0006003c: 00008052           mov w0, #0
00060040: c0035fd6           ret 
00060044: 20008052           mov w0, #1
00060048: feffff17           b #0x60040
0006004c: 1f2003d5           nop 
00060050: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
00060054: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
00060058: f353bca9           stp x19, x20, [sp, #-0x40]!
0006005c: f55b01a9           stp x21, x22, [sp, #0x10]

3Dfx/arm64_chpe_x86/Glide.dll signature 0x763b0
00076338: 09008052           mov w9, #0
0007633c: 2d200051           sub w13, w1, #8
00076340: cd020034           cbz w13, #0x76398
00076344: 4b0100b0           adrp x11, #0x9f000
00076348: 67b11c11           add w7, w11, #0x72c
0007634c: 4b0100b0           adrp x11, #0x9f000
00076350: 6ec11c11           add w14, w11, #0x730
00076354: eb020018           ldr w11, #0x763b0
00076358: ef020018           ldr w15, #0x763b4
0007635c: 2c01000b           add w12, w9, w0
00076360: cafddf88           ldar w10, [x14]
00076364: 880140b9           ldr w8, [x12]
00076368: 08010a0b           add w8, w8, w10
0007636c: 1f010b6b           cmp w8, w11
00076370: e1000054           b.ne #0x7638c
00076374: 88110011           add w8, w12, #4
00076378: eafcdf88           ldar w10, [x7]
0007637c: 080140b9           ldr w8, [x8]
00076380: 08010a0b           add w8, w8, w10
00076384: 1f010f6b           cmp w8, w15
00076388: e0000054           b.eq #0x763a4
0007638c: 29050011           add w9, w9, #1
00076390: 3f010d6b           cmp w9, w13
00076394: 43feff54           b.lo #0x7635c
00076398: 00008052           mov w0, #0
0007639c: e003002a           mov w0, w0
000763a0: c0035fd6           ret 
000763a4: 20008052           mov w0, #1
000763a8: fdffff17           b #0x7639c
000763ac: 1f2003d5           nop 
000763b0: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
000763b4: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
000763b8: 00000000           udf #0
000763bc: 4d550100           .byte 0x4d, 0x55, 0x01, 0x00

3Dfx/arm64_chpe_x86/Glide2x.dll signature 0x75f30
00075eb8: 09008052           mov w9, #0
00075ebc: 2d200051           sub w13, w1, #8
00075ec0: cd020034           cbz w13, #0x75f18
00075ec4: 4b0100d0           adrp x11, #0x9f000
00075ec8: 67b11c11           add w7, w11, #0x72c
00075ecc: 4b0100d0           adrp x11, #0x9f000
00075ed0: 6ec11c11           add w14, w11, #0x730
00075ed4: eb020018           ldr w11, #0x75f30
00075ed8: ef020018           ldr w15, #0x75f34
00075edc: 2c01000b           add w12, w9, w0
00075ee0: cafddf88           ldar w10, [x14]
00075ee4: 880140b9           ldr w8, [x12]
00075ee8: 08010a0b           add w8, w8, w10
00075eec: 1f010b6b           cmp w8, w11
00075ef0: e1000054           b.ne #0x75f0c
00075ef4: 88110011           add w8, w12, #4
00075ef8: eafcdf88           ldar w10, [x7]
00075efc: 080140b9           ldr w8, [x8]
00075f00: 08010a0b           add w8, w8, w10
00075f04: 1f010f6b           cmp w8, w15
00075f08: e0000054           b.eq #0x75f24
00075f0c: 29050011           add w9, w9, #1
00075f10: 3f010d6b           cmp w9, w13
00075f14: 43feff54           b.lo #0x75edc
00075f18: 00008052           mov w0, #0
00075f1c: e003002a           mov w0, w0
00075f20: c0035fd6           ret 
00075f24: 20008052           mov w0, #1
00075f28: fdffff17           b #0x75f1c
00075f2c: 1f2003d5           nop 
00075f30: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
00075f34: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
00075f38: 00000000           udf #0
00075f3c: ad530100           .byte 0xad, 0x53, 0x01, 0x00

3Dfx/arm64_chpe_x86/Glide3x.dll signature 0x79bd0
00079b58: 09008052           mov w9, #0
00079b5c: 2d200051           sub w13, w1, #8
00079b60: cd020034           cbz w13, #0x79bb8
00079b64: 4b0100b0           adrp x11, #0xa2000
00079b68: 67312011           add w7, w11, #0x80c
00079b6c: 4b0100b0           adrp x11, #0xa2000
00079b70: 6e412011           add w14, w11, #0x810
00079b74: eb020018           ldr w11, #0x79bd0
00079b78: ef020018           ldr w15, #0x79bd4
00079b7c: 2c01000b           add w12, w9, w0
00079b80: cafddf88           ldar w10, [x14]
00079b84: 880140b9           ldr w8, [x12]
00079b88: 08010a0b           add w8, w8, w10
00079b8c: 1f010b6b           cmp w8, w11
00079b90: e1000054           b.ne #0x79bac
00079b94: 88110011           add w8, w12, #4
00079b98: eafcdf88           ldar w10, [x7]
00079b9c: 080140b9           ldr w8, [x8]
00079ba0: 08010a0b           add w8, w8, w10
00079ba4: 1f010f6b           cmp w8, w15
00079ba8: e0000054           b.eq #0x79bc4
00079bac: 29050011           add w9, w9, #1
00079bb0: 3f010d6b           cmp w9, w13
00079bb4: 43feff54           b.lo #0x79b7c
00079bb8: 00008052           mov w0, #0
00079bbc: e003002a           mov w0, w0
00079bc0: c0035fd6           ret 
00079bc4: 20008052           mov w0, #1
00079bc8: fdffff17           b #0x79bbc
00079bcc: 1f2003d5           nop 
00079bd0: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
00079bd4: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
00079bd8: 00000000           udf #0
00079bdc: ad520100           .byte 0xad, 0x52, 0x01, 0x00

3Dfx/arm64_chpe_x86/Napalm/Glide3x.dll signature 0x7f270
0007f1f8: 09008052           mov w9, #0
0007f1fc: 2d200051           sub w13, w1, #8
0007f200: cd020034           cbz w13, #0x7f258
0007f204: 4b0100f0           adrp x11, #0xaa000
0007f208: 67712711           add w7, w11, #0x9dc
0007f20c: 4b0100f0           adrp x11, #0xaa000
0007f210: 6e812711           add w14, w11, #0x9e0
0007f214: eb020018           ldr w11, #0x7f270
0007f218: ef020018           ldr w15, #0x7f274
0007f21c: 2c01000b           add w12, w9, w0
0007f220: cafddf88           ldar w10, [x14]
0007f224: 880140b9           ldr w8, [x12]
0007f228: 08010a0b           add w8, w8, w10
0007f22c: 1f010b6b           cmp w8, w11
0007f230: e1000054           b.ne #0x7f24c
0007f234: 88110011           add w8, w12, #4
0007f238: eafcdf88           ldar w10, [x7]
0007f23c: 080140b9           ldr w8, [x8]
0007f240: 08010a0b           add w8, w8, w10
0007f244: 1f010f6b           cmp w8, w15
0007f248: e0000054           b.eq #0x7f264
0007f24c: 29050011           add w9, w9, #1
0007f250: 3f010d6b           cmp w9, w13
0007f254: 43feff54           b.lo #0x7f21c
0007f258: 00008052           mov w0, #0
0007f25c: e003002a           mov w0, w0
0007f260: c0035fd6           ret 
0007f264: 20008052           mov w0, #1
0007f268: fdffff17           b #0x7f25c
0007f26c: 1f2003d5           nop 
0007f270: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
0007f274: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
0007f278: 00000000           udf #0
0007f27c: 35610100           .byte 0x35, 0x61, 0x01, 0x00

3Dfx/x64/Glide.dll signature 0x5a1e8
0005a1c4: 4c8bd1             mov r10, rcx
0005a1c7: 83fa08             cmp edx, 8
0005a1ca: 723d               jb 0x5a209
0005a1cc: 4533c0             xor r8d, r8d
0005a1cf: 448d4af8           lea r9d, [rdx - 8]
0005a1d3: 4585c9             test r9d, r9d
0005a1d6: 7431               je 0x5a209
0005a1d8: 418d5001           lea edx, [r8 + 1]
0005a1dc: 8b0d1a230100       mov ecx, dword ptr [rip + 0x1231a]
0005a1e2: 43030c02           add ecx, dword ptr [r10 + r8]
0005a1e6: 81f9ba14dab9       cmp ecx, 0xb9da14ba
0005a1ec: 7513               jne 0x5a201
0005a1ee: 8b0dfc220100       mov ecx, dword ptr [rip + 0x122fc]
0005a1f4: 43034c0204         add ecx, dword ptr [r10 + r8 + 4]
0005a1f9: 81f92cdb1b0f       cmp ecx, 0xf1bdb2c
0005a1ff: 740a               je 0x5a20b
0005a201: 4403c2             add r8d, edx
0005a204: 453bc1             cmp r8d, r9d
0005a207: 72d3               jb 0x5a1dc
0005a209: 32d2               xor dl, dl
0005a20b: 8ac2               mov al, dl
0005a20d: c3                 ret 
0005a20e: cc                 int3 
0005a20f: cc                 int3 
0005a210: 4053               push rbx
0005a212: 55                 push rbp
0005a213: 56                 push rsi
0005a214: 57                 push rdi
0005a215: 4154               push r12
0005a217: 4155               push r13
0005a219: 4156               push r14
0005a21b: 4157               push r15
0005a21d: 4881ec38010000     sub rsp, 0x138
0005a224: 8b05de280100       mov eax, dword ptr [rip + 0x128de]
0005a22a: be01000000         mov esi, 1
0005a22f: 488be9             mov rbp, rcx
0005a232: 40                 .byte 0x40
0005a233: 84                 .byte 0x84

3Dfx/x64/Glide2x.dll signature 0x59d40
00059d1c: 4c8bd1             mov r10, rcx
00059d1f: 83fa08             cmp edx, 8
00059d22: 723d               jb 0x59d61
00059d24: 4533c0             xor r8d, r8d
00059d27: 448d4af8           lea r9d, [rdx - 8]
00059d2b: 4585c9             test r9d, r9d
00059d2e: 7431               je 0x59d61
00059d30: 418d5001           lea edx, [r8 + 1]
00059d34: 8b0dc2270100       mov ecx, dword ptr [rip + 0x127c2]
00059d3a: 43030c02           add ecx, dword ptr [r10 + r8]
00059d3e: 81f9ba14dab9       cmp ecx, 0xb9da14ba
00059d44: 7513               jne 0x59d59
00059d46: 8b0da4270100       mov ecx, dword ptr [rip + 0x127a4]
00059d4c: 43034c0204         add ecx, dword ptr [r10 + r8 + 4]
00059d51: 81f92cdb1b0f       cmp ecx, 0xf1bdb2c
00059d57: 740a               je 0x59d63
00059d59: 4403c2             add r8d, edx
00059d5c: 453bc1             cmp r8d, r9d
00059d5f: 72d3               jb 0x59d34
00059d61: 32d2               xor dl, dl
00059d63: 8ac2               mov al, dl
00059d65: c3                 ret 
00059d66: cc                 int3 
00059d67: cc                 int3 
00059d68: 4053               push rbx
00059d6a: 55                 push rbp
00059d6b: 56                 push rsi
00059d6c: 57                 push rdi
00059d6d: 4154               push r12
00059d6f: 4155               push r13
00059d71: 4156               push r14
00059d73: 4157               push r15
00059d75: 4881ec38010000     sub rsp, 0x138
00059d7c: 8b05362d0100       mov eax, dword ptr [rip + 0x12d36]
00059d82: be01000000         mov esi, 1
00059d87: 488be9             mov rbp, rcx
00059d8a: 40                 .byte 0x40
00059d8b: 84                 .byte 0x84

3Dfx/x64/Glide3x.dll signature 0x5c34c
0005c328: 4c8bd1             mov r10, rcx
0005c32b: 83fa08             cmp edx, 8
0005c32e: 723d               jb 0x5c36d
0005c330: 4533c0             xor r8d, r8d
0005c333: 448d4af8           lea r9d, [rdx - 8]
0005c337: 4585c9             test r9d, r9d
0005c33a: 7431               je 0x5c36d
0005c33c: 418d5001           lea edx, [r8 + 1]
0005c340: 8b0df6120100       mov ecx, dword ptr [rip + 0x112f6]
0005c346: 43030c02           add ecx, dword ptr [r10 + r8]
0005c34a: 81f9ba14dab9       cmp ecx, 0xb9da14ba
0005c350: 7513               jne 0x5c365
0005c352: 8b0dd8120100       mov ecx, dword ptr [rip + 0x112d8]
0005c358: 43034c0204         add ecx, dword ptr [r10 + r8 + 4]
0005c35d: 81f92cdb1b0f       cmp ecx, 0xf1bdb2c
0005c363: 740a               je 0x5c36f
0005c365: 4403c2             add r8d, edx
0005c368: 453bc1             cmp r8d, r9d
0005c36b: 72d3               jb 0x5c340
0005c36d: 32d2               xor dl, dl
0005c36f: 8ac2               mov al, dl
0005c371: c3                 ret 
0005c372: cc                 int3 
0005c373: cc                 int3 
0005c374: 4053               push rbx
0005c376: 55                 push rbp
0005c377: 56                 push rsi
0005c378: 57                 push rdi
0005c379: 4154               push r12
0005c37b: 4155               push r13
0005c37d: 4156               push r14
0005c37f: 4157               push r15
0005c381: 4881ec38010000     sub rsp, 0x138
0005c388: 8b05e2180100       mov eax, dword ptr [rip + 0x118e2]
0005c38e: be01000000         mov esi, 1
0005c393: 488be9             mov rbp, rcx
0005c396: 40                 .byte 0x40
0005c397: 84                 .byte 0x84

3Dfx/x86/Glide.dll signature 0x4ca4e
0004ca28: 55                 push ebp
0004ca29: 8bec               mov ebp, esp
0004ca2b: 8b450c             mov eax, dword ptr [ebp + 0xc]
0004ca2e: 56                 push esi
0004ca2f: 57                 push edi
0004ca30: 8b7d08             mov edi, dword ptr [ebp + 8]
0004ca33: 83f808             cmp eax, 8
0004ca36: 7235               jb 0x4ca6d
0004ca38: 8d70f8             lea esi, [eax - 8]
0004ca3b: 33d2               xor edx, edx
0004ca3d: 85f6               test esi, esi
0004ca3f: 742c               je 0x4ca6d
0004ca41: 8b0d48940510       mov ecx, dword ptr [0x10059448]
0004ca47: 8b043a             mov eax, dword ptr [edx + edi]
0004ca4a: 03c8               add ecx, eax
0004ca4c: 81f9ba14dab9       cmp ecx, 0xb9da14ba
0004ca52: 7514               jne 0x4ca68
0004ca54: 8b0ddc930510       mov ecx, dword ptr [0x100593dc]
0004ca5a: 8b443a04           mov eax, dword ptr [edx + edi + 4]
0004ca5e: 03c8               add ecx, eax
0004ca60: 81f92cdb1b0f       cmp ecx, 0xf1bdb2c
0004ca66: 740b               je 0x4ca73
0004ca68: 42                 inc edx
0004ca69: 3bd6               cmp edx, esi
0004ca6b: 72d4               jb 0x4ca41
0004ca6d: 32c0               xor al, al
0004ca6f: 5f                 pop edi
0004ca70: 5e                 pop esi
0004ca71: 5d                 pop ebp
0004ca72: c3                 ret 
0004ca73: b001               mov al, 1
0004ca75: ebf8               jmp 0x4ca6f
0004ca77: 55                 push ebp
0004ca78: 8bec               mov ebp, esp
0004ca7a: ff7508             push dword ptr [ebp + 8]
0004ca7d: e8fdfeffff         call 0x4c97f
0004ca82: 5d                 pop ebp
0004ca83: c3                 ret 
0004ca84: 55                 push ebp
0004ca85: 8bec               mov ebp, esp
0004ca87: 83e4f8             and esp, 0xfffffff8
0004ca8a: 81ec9c000000       sub esp, 0x9c
0004ca90: 53                 push ebx
0004ca91: 8b5d08             mov ebx, dword ptr [ebp + 8]
0004ca94: 894c240c           mov dword ptr [esp + 0xc], ecx

3Dfx/x86/Glide2x.dll signature 0x4c6be
0004c698: 55                 push ebp
0004c699: 8bec               mov ebp, esp
0004c69b: 8b450c             mov eax, dword ptr [ebp + 0xc]
0004c69e: 56                 push esi
0004c69f: 57                 push edi
0004c6a0: 8b7d08             mov edi, dword ptr [ebp + 8]
0004c6a3: 83f808             cmp eax, 8
0004c6a6: 7235               jb 0x4c6dd
0004c6a8: 8d70f8             lea esi, [eax - 8]
0004c6ab: 33d2               xor edx, edx
0004c6ad: 85f6               test esi, esi
0004c6af: 742c               je 0x4c6dd
0004c6b1: 8b0d48940510       mov ecx, dword ptr [0x10059448]
0004c6b7: 8b043a             mov eax, dword ptr [edx + edi]
0004c6ba: 03c8               add ecx, eax
0004c6bc: 81f9ba14dab9       cmp ecx, 0xb9da14ba
0004c6c2: 7514               jne 0x4c6d8
0004c6c4: 8b0ddc930510       mov ecx, dword ptr [0x100593dc]
0004c6ca: 8b443a04           mov eax, dword ptr [edx + edi + 4]
0004c6ce: 03c8               add ecx, eax
0004c6d0: 81f92cdb1b0f       cmp ecx, 0xf1bdb2c
0004c6d6: 740b               je 0x4c6e3
0004c6d8: 42                 inc edx
0004c6d9: 3bd6               cmp edx, esi
0004c6db: 72d4               jb 0x4c6b1
0004c6dd: 32c0               xor al, al
0004c6df: 5f                 pop edi
0004c6e0: 5e                 pop esi
0004c6e1: 5d                 pop ebp
0004c6e2: c3                 ret 
0004c6e3: b001               mov al, 1
0004c6e5: ebf8               jmp 0x4c6df
0004c6e7: 55                 push ebp
0004c6e8: 8bec               mov ebp, esp
0004c6ea: ff7508             push dword ptr [ebp + 8]
0004c6ed: e8fdfeffff         call 0x4c5ef
0004c6f2: 5d                 pop ebp
0004c6f3: c3                 ret 
0004c6f4: 55                 push ebp
0004c6f5: 8bec               mov ebp, esp
0004c6f7: 83e4f8             and esp, 0xfffffff8
0004c6fa: 81ec9c000000       sub esp, 0x9c
0004c700: 53                 push ebx
0004c701: 8b5d08             mov ebx, dword ptr [ebp + 8]
0004c704: 894c240c           mov dword ptr [esp + 0xc], ecx

3Dfx/x86/Glide3x.dll signature 0x4f1a6
0004f180: 55                 push ebp
0004f181: 8bec               mov ebp, esp
0004f183: 8b450c             mov eax, dword ptr [ebp + 0xc]
0004f186: 56                 push esi
0004f187: 57                 push edi
0004f188: 8b7d08             mov edi, dword ptr [ebp + 8]
0004f18b: 83f808             cmp eax, 8
0004f18e: 7235               jb 0x4f1c5
0004f190: 8d70f8             lea esi, [eax - 8]
0004f193: 33d2               xor edx, edx
0004f195: 85f6               test esi, esi
0004f197: 742c               je 0x4f1c5
0004f199: 8b0d00b50510       mov ecx, dword ptr [0x1005b500]
0004f19f: 8b043a             mov eax, dword ptr [edx + edi]
0004f1a2: 03c8               add ecx, eax
0004f1a4: 81f9ba14dab9       cmp ecx, 0xb9da14ba
0004f1aa: 7514               jne 0x4f1c0
0004f1ac: 8b0d94b40510       mov ecx, dword ptr [0x1005b494]
0004f1b2: 8b443a04           mov eax, dword ptr [edx + edi + 4]
0004f1b6: 03c8               add ecx, eax
0004f1b8: 81f92cdb1b0f       cmp ecx, 0xf1bdb2c
0004f1be: 740b               je 0x4f1cb
0004f1c0: 42                 inc edx
0004f1c1: 3bd6               cmp edx, esi
0004f1c3: 72d4               jb 0x4f199
0004f1c5: 32c0               xor al, al
0004f1c7: 5f                 pop edi
0004f1c8: 5e                 pop esi
0004f1c9: 5d                 pop ebp
0004f1ca: c3                 ret 
0004f1cb: b001               mov al, 1
0004f1cd: ebf8               jmp 0x4f1c7
0004f1cf: 55                 push ebp
0004f1d0: 8bec               mov ebp, esp
0004f1d2: ff7508             push dword ptr [ebp + 8]
0004f1d5: e8fdfeffff         call 0x4f0d7
0004f1da: 5d                 pop ebp
0004f1db: c3                 ret 
0004f1dc: 55                 push ebp
0004f1dd: 8bec               mov ebp, esp
0004f1df: 83e4f8             and esp, 0xfffffff8
0004f1e2: 81ec9c000000       sub esp, 0x9c
0004f1e8: 53                 push ebx
0004f1e9: 8b5d08             mov ebx, dword ptr [ebp + 8]
0004f1ec: 894c240c           mov dword ptr [esp + 0xc], ecx

3Dfx/x86/Napalm/Glide3x.dll signature 0x525af
00052589: 55                 push ebp
0005258a: 8bec               mov ebp, esp
0005258c: 8b450c             mov eax, dword ptr [ebp + 0xc]
0005258f: 56                 push esi
00052590: 57                 push edi
00052591: 8b7d08             mov edi, dword ptr [ebp + 8]
00052594: 83f808             cmp eax, 8
00052597: 7235               jb 0x525ce
00052599: 8d70f8             lea esi, [eax - 8]
0005259c: 33d2               xor edx, edx
0005259e: 85f6               test esi, esi
000525a0: 742c               je 0x525ce
000525a2: 8b0dd4f60510       mov ecx, dword ptr [0x1005f6d4]
000525a8: 8b043a             mov eax, dword ptr [edx + edi]
000525ab: 03c8               add ecx, eax
000525ad: 81f9ba14dab9       cmp ecx, 0xb9da14ba
000525b3: 7514               jne 0x525c9
000525b5: 8b0dc8f60510       mov ecx, dword ptr [0x1005f6c8]
000525bb: 8b443a04           mov eax, dword ptr [edx + edi + 4]
000525bf: 03c8               add ecx, eax
000525c1: 81f92cdb1b0f       cmp ecx, 0xf1bdb2c
000525c7: 740b               je 0x525d4
000525c9: 42                 inc edx
000525ca: 3bd6               cmp edx, esi
000525cc: 72d4               jb 0x525a2
000525ce: 32c0               xor al, al
000525d0: 5f                 pop edi
000525d1: 5e                 pop esi
000525d2: 5d                 pop ebp
000525d3: c3                 ret 
000525d4: b001               mov al, 1
000525d6: ebf8               jmp 0x525d0
000525d8: 55                 push ebp
000525d9: 8bec               mov ebp, esp
000525db: ff7508             push dword ptr [ebp + 8]
000525de: e8fdfeffff         call 0x524e0
000525e3: 5d                 pop ebp
000525e4: c3                 ret 
000525e5: 55                 push ebp
000525e6: 8bec               mov ebp, esp
000525e8: 83e4f8             and esp, 0xfffffff8
000525eb: 81ec9c000000       sub esp, 0x9c
000525f1: 53                 push ebx
000525f2: 8b5d08             mov ebx, dword ptr [ebp + 8]
000525f5: 894c240c           mov dword ptr [esp + 0xc], ecx

MS/arm64_chpe_x86/D3D8.dll signature 0xf01c0
000f0148: 09008052           mov w9, #0
000f014c: 2d200051           sub w13, w1, #8
000f0150: cd020034           cbz w13, #0xf01a8
000f0154: 2b0200f0           adrp x11, #0x137000
000f0158: 67e11011           add w7, w11, #0x438
000f015c: 2b0200f0           adrp x11, #0x137000
000f0160: 6ef11011           add w14, w11, #0x43c
000f0164: eb020018           ldr w11, #0xf01c0
000f0168: ef020018           ldr w15, #0xf01c4
000f016c: 2c01000b           add w12, w9, w0
000f0170: cafddf88           ldar w10, [x14]
000f0174: 880140b9           ldr w8, [x12]
000f0178: 08010a0b           add w8, w8, w10
000f017c: 1f010b6b           cmp w8, w11
000f0180: e1000054           b.ne #0xf019c
000f0184: 88110011           add w8, w12, #4
000f0188: eafcdf88           ldar w10, [x7]
000f018c: 080140b9           ldr w8, [x8]
000f0190: 08010a0b           add w8, w8, w10
000f0194: 1f010f6b           cmp w8, w15
000f0198: e0000054           b.eq #0xf01b4
000f019c: 29050011           add w9, w9, #1
000f01a0: 3f010d6b           cmp w9, w13
000f01a4: 43feff54           b.lo #0xf016c
000f01a8: 00008052           mov w0, #0
000f01ac: e003002a           mov w0, w0
000f01b0: c0035fd6           ret 
000f01b4: 20008052           mov w0, #1
000f01b8: fdffff17           b #0xf01ac
000f01bc: 1f2003d5           nop 
000f01c0: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
000f01c4: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
000f01c8: 00000000           udf #0
000f01cc: 7db90200           .byte 0x7d, 0xb9, 0x02, 0x00

MS/arm64_chpe_x86/D3D9.dll signature 0x123790
00123718: 09008052           mov w9, #0
0012371c: 2d200051           sub w13, w1, #8
00123720: cd020034           cbz w13, #0x123778
00123724: 6b020090           adrp x11, #0x16f000
00123728: 67a12711           add w7, w11, #0x9e8
0012372c: 6b020090           adrp x11, #0x16f000
00123730: 6eb12711           add w14, w11, #0x9ec
00123734: eb020018           ldr w11, #0x123790
00123738: ef020018           ldr w15, #0x123794
0012373c: 2c01000b           add w12, w9, w0
00123740: cafddf88           ldar w10, [x14]
00123744: 880140b9           ldr w8, [x12]
00123748: 08010a0b           add w8, w8, w10
0012374c: 1f010b6b           cmp w8, w11
00123750: e1000054           b.ne #0x12376c
00123754: 88110011           add w8, w12, #4
00123758: eafcdf88           ldar w10, [x7]
0012375c: 080140b9           ldr w8, [x8]
00123760: 08010a0b           add w8, w8, w10
00123764: 1f010f6b           cmp w8, w15
00123768: e0000054           b.eq #0x123784
0012376c: 29050011           add w9, w9, #1
00123770: 3f010d6b           cmp w9, w13
00123774: 43feff54           b.lo #0x12373c
00123778: 00008052           mov w0, #0
0012377c: e003002a           mov w0, w0
00123780: c0035fd6           ret 
00123784: 20008052           mov w0, #1
00123788: fdffff17           b #0x12377c
0012378c: 1f2003d5           nop 
00123790: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
00123794: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
00123798: 00000000           udf #0
0012379c: 15ee0200           .byte 0x15, 0xee, 0x02, 0x00

MS/arm64_chpe_x86/DDraw.dll signature 0x71920
000718a8: 09008052           mov w9, #0
000718ac: 2d200051           sub w13, w1, #8
000718b0: cd020034           cbz w13, #0x71908
000718b4: 6b020090           adrp x11, #0xbd000
000718b8: 67e10511           add w7, w11, #0x178
000718bc: 6b020090           adrp x11, #0xbd000
000718c0: 6ef10511           add w14, w11, #0x17c
000718c4: eb020018           ldr w11, #0x71920
000718c8: ef020018           ldr w15, #0x71924
000718cc: 2c01000b           add w12, w9, w0
000718d0: cafddf88           ldar w10, [x14]
000718d4: 880140b9           ldr w8, [x12]
000718d8: 08010a0b           add w8, w8, w10
000718dc: 1f010b6b           cmp w8, w11
000718e0: e1000054           b.ne #0x718fc
000718e4: 88110011           add w8, w12, #4
000718e8: eafcdf88           ldar w10, [x7]
000718ec: 080140b9           ldr w8, [x8]
000718f0: 08010a0b           add w8, w8, w10
000718f4: 1f010f6b           cmp w8, w15
000718f8: e0000054           b.eq #0x71914
000718fc: 29050011           add w9, w9, #1
00071900: 3f010d6b           cmp w9, w13
00071904: 43feff54           b.lo #0x718cc
00071908: 00008052           mov w0, #0
0007190c: e003002a           mov w0, w0
00071910: c0035fd6           ret 
00071914: 20008052           mov w0, #1
00071918: fdffff17           b #0x7190c
0007191c: 1f2003d5           nop 
00071920: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
00071924: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
00071928: 00000000           udf #0
0007192c: 8d100300           .byte 0x8d, 0x10, 0x03, 0x00

MS/arm64x/D3D9.dll signature 0xf6170
000f60f8: 20008052           mov w0, #1
000f60fc: fbffff17           b #0xf60e8
000f6100: 3f200071           cmp w1, #8
000f6104: c3020054           b.lo #0xf615c
000f6108: 09008052           mov w9, #0
000f610c: 2c200051           sub w12, w1, #8
000f6110: 6c020034           cbz w12, #0xf615c
000f6114: aa0a00b0           adrp x10, #0x24b000
000f6118: 4a010791           add x10, x10, #0x1c0
000f611c: ad020018           ldr w13, #0xf6170
000f6120: 0f100091           add x15, x0, #4
000f6124: 8e020018           ldr w14, #0xf6174
000f6128: 4b0d40b9           ldr w11, [x10, #0xc]
000f612c: 084869b8           ldr w8, [x0, w9, uxtw]
000f6130: 08010b0b           add w8, w8, w11
000f6134: 1f010d6b           cmp w8, w13
000f6138: c1000054           b.ne #0xf6150
000f613c: 4b0140b9           ldr w11, [x10]
000f6140: e84969b8           ldr w8, [x15, w9, uxtw]
000f6144: 08010b0b           add w8, w8, w11
000f6148: 1f010e6b           cmp w8, w14
000f614c: c0000054           b.eq #0xf6164
000f6150: 29050011           add w9, w9, #1
000f6154: 3f010c6b           cmp w9, w12
000f6158: 83feff54           b.lo #0xf6128
000f615c: 00008052           mov w0, #0
000f6160: c0035fd6           ret 
000f6164: 20008052           mov w0, #1
000f6168: feffff17           b #0xf6160
000f616c: 1f2003d5           nop 
000f6170: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
000f6174: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
000f6178: f353bca9           stp x19, x20, [sp, #-0x40]!
000f617c: f55b01a9           stp x21, x22, [sp, #0x10]

MS/arm64x/D3D9.dll signature 0x215218
002151a0: 3f200071           cmp w1, #8
002151a4: 03030054           b.lo #0x215204
002151a8: 09008052           mov w9, #0
002151ac: 2c200051           sub w12, w1, #8
002151b0: ac020034           cbz w12, #0x215204
002151b4: aa0100f0           adrp x10, #0x24c000
002151b8: 45811a91           add x5, x10, #0x6a0
002151bc: aa0100f0           adrp x10, #0x24c000
002151c0: 4f911a91           add x15, x10, #0x6a4
002151c4: aa020018           ldr w10, #0x215218
002151c8: 06100091           add x6, x0, #4
002151cc: 87020018           ldr w7, #0x21521c
002151d0: ebfddf88           ldar w11, [x15]
002151d4: 084869b8           ldr w8, [x0, w9, uxtw]
002151d8: 08010b0b           add w8, w8, w11
002151dc: 1f010a6b           cmp w8, w10
002151e0: c1000054           b.ne #0x2151f8
002151e4: abfcdf88           ldar w11, [x5]
002151e8: c84869b8           ldr w8, [x6, w9, uxtw]
002151ec: 08010b0b           add w8, w8, w11
002151f0: 1f01076b           cmp w8, w7
002151f4: c0000054           b.eq #0x21520c
002151f8: 29050011           add w9, w9, #1
002151fc: 3f010c6b           cmp w9, w12
00215200: 83feff54           b.lo #0x2151d0
00215204: 00008052           mov w0, #0
00215208: c0035fd6           ret 
0021520c: 20008052           mov w0, #1
00215210: feffff17           b #0x215208
00215214: 1f2003d5           nop 
00215218: ba14dab9           .byte 0xba, 0x14, 0xda, 0xb9
0021521c: 2cdb1b0f           .byte 0x2c, 0xdb, 0x1b, 0x0f
00215220: 00000000           udf #0
00215224: 69f30000           udf #0xf369

MS/x64/D3D9.dll signature 0xee570
000ee54c: 4c8bd1             mov r10, rcx
000ee54f: 83fa08             cmp edx, 8
000ee552: 723d               jb 0xee591
000ee554: 4533c0             xor r8d, r8d
000ee557: 448d4af8           lea r9d, [rdx - 8]
000ee55b: 4585c9             test r9d, r9d
000ee55e: 7431               je 0xee591
000ee560: 418d5001           lea edx, [r8 + 1]
000ee564: 8b0d1a220200       mov ecx, dword ptr [rip + 0x2221a]
000ee56a: 43030c02           add ecx, dword ptr [r10 + r8]
000ee56e: 81f9ba14dab9       cmp ecx, 0xb9da14ba
000ee574: 7513               jne 0xee589
000ee576: 8b0dfc210200       mov ecx, dword ptr [rip + 0x221fc]
000ee57c: 43034c0204         add ecx, dword ptr [r10 + r8 + 4]
000ee581: 81f92cdb1b0f       cmp ecx, 0xf1bdb2c
000ee587: 740a               je 0xee593
000ee589: 4403c2             add r8d, edx
000ee58c: 453bc1             cmp r8d, r9d
000ee58f: 72d3               jb 0xee564
000ee591: 32d2               xor dl, dl
000ee593: 8ac2               mov al, dl
000ee595: c3                 ret 
000ee596: cc                 int3 
000ee597: cc                 int3 
000ee598: 4053               push rbx
000ee59a: 55                 push rbp
000ee59b: 56                 push rsi
000ee59c: 57                 push rdi
000ee59d: 4154               push r12
000ee59f: 4155               push r13
000ee5a1: 4156               push r14
000ee5a3: 4157               push r15
000ee5a5: 4881ec38010000     sub rsp, 0x138
000ee5ac: 8b050a910200       mov eax, dword ptr [rip + 0x2910a]
000ee5b2: be01000000         mov esi, 1
000ee5b7: 488be9             mov rbp, rcx
000ee5ba: 40                 .byte 0x40
000ee5bb: 84                 .byte 0x84

MS/x86/D3D8.dll signature 0xa1dee
000a1dc8: 55                 push ebp
000a1dc9: 8bec               mov ebp, esp
000a1dcb: 8b450c             mov eax, dword ptr [ebp + 0xc]
000a1dce: 56                 push esi
000a1dcf: 57                 push edi
000a1dd0: 8b7d08             mov edi, dword ptr [ebp + 8]
000a1dd3: 83f808             cmp eax, 8
000a1dd6: 7235               jb 0xa1e0d
000a1dd8: 8d70f8             lea esi, [eax - 8]
000a1ddb: 33d2               xor edx, edx
000a1ddd: 85f6               test esi, esi
000a1ddf: 742c               je 0xa1e0d
000a1de1: 8b0de48f0b10       mov ecx, dword ptr [0x100b8fe4]
000a1de7: 8b043a             mov eax, dword ptr [edx + edi]
000a1dea: 03c8               add ecx, eax
000a1dec: 81f9ba14dab9       cmp ecx, 0xb9da14ba
000a1df2: 7514               jne 0xa1e08
000a1df4: 8b0dd88f0b10       mov ecx, dword ptr [0x100b8fd8]
000a1dfa: 8b443a04           mov eax, dword ptr [edx + edi + 4]
000a1dfe: 03c8               add ecx, eax
000a1e00: 81f92cdb1b0f       cmp ecx, 0xf1bdb2c
000a1e06: 740b               je 0xa1e13
000a1e08: 42                 inc edx
000a1e09: 3bd6               cmp edx, esi
000a1e0b: 72d4               jb 0xa1de1
000a1e0d: 32c0               xor al, al
000a1e0f: 5f                 pop edi
000a1e10: 5e                 pop esi
000a1e11: 5d                 pop ebp
000a1e12: c3                 ret 
000a1e13: b001               mov al, 1
000a1e15: ebf8               jmp 0xa1e0f
000a1e17: 55                 push ebp
000a1e18: 8bec               mov ebp, esp
000a1e1a: ff7508             push dword ptr [ebp + 8]
000a1e1d: e8fdfeffff         call 0xa1d1f
000a1e22: 5d                 pop ebp
000a1e23: c3                 ret 
000a1e24: 56                 push esi
000a1e25: 8bf1               mov esi, ecx
000a1e27: b9f91e0a10         mov ecx, 0x100a1ef9
000a1e2c: e81bfeffff         call 0xa1c4c
000a1e31: 84c0               test al, al
000a1e33: 750e               jne 0xa1e43
000a1e35: c7                 .byte 0xc7
000a1e36: 46                 inc esi
000a1e37: 08                 .byte 0x08

MS/x86/D3D9.dll signature 0xc46c3
000c469d: 55                 push ebp
000c469e: 8bec               mov ebp, esp
000c46a0: 8b450c             mov eax, dword ptr [ebp + 0xc]
000c46a3: 56                 push esi
000c46a4: 57                 push edi
000c46a5: 8b7d08             mov edi, dword ptr [ebp + 8]
000c46a8: 83f808             cmp eax, 8
000c46ab: 7235               jb 0xc46e2
000c46ad: 8d70f8             lea esi, [eax - 8]
000c46b0: 33d2               xor edx, edx
000c46b2: 85f6               test esi, esi
000c46b4: 742c               je 0xc46e2
000c46b6: 8b0d94d50d10       mov ecx, dword ptr [0x100dd594]
000c46bc: 8b043a             mov eax, dword ptr [edx + edi]
000c46bf: 03c8               add ecx, eax
000c46c1: 81f9ba14dab9       cmp ecx, 0xb9da14ba
000c46c7: 7514               jne 0xc46dd
000c46c9: 8b0d88d50d10       mov ecx, dword ptr [0x100dd588]
000c46cf: 8b443a04           mov eax, dword ptr [edx + edi + 4]
000c46d3: 03c8               add ecx, eax
000c46d5: 81f92cdb1b0f       cmp ecx, 0xf1bdb2c
000c46db: 740b               je 0xc46e8
000c46dd: 42                 inc edx
000c46de: 3bd6               cmp edx, esi
000c46e0: 72d4               jb 0xc46b6
000c46e2: 32c0               xor al, al
000c46e4: 5f                 pop edi
000c46e5: 5e                 pop esi
000c46e6: 5d                 pop ebp
000c46e7: c3                 ret 
000c46e8: b001               mov al, 1
000c46ea: ebf8               jmp 0xc46e4
000c46ec: 55                 push ebp
000c46ed: 8bec               mov ebp, esp
000c46ef: ff7508             push dword ptr [ebp + 8]
000c46f2: e8fdfeffff         call 0xc45f4
000c46f7: 5d                 pop ebp
000c46f8: c3                 ret 
000c46f9: 56                 push esi
000c46fa: 8bf1               mov esi, ecx
000c46fc: b9ce470c10         mov ecx, 0x100c47ce
000c4701: e81bfeffff         call 0xc4521
000c4706: 84c0               test al, al
000c4708: 750e               jne 0xc4718
000c470a: c7                 .byte 0xc7
000c470b: 46                 inc esi
000c470c: 08                 .byte 0x08

MS/x86/DDraw.dll signature 0x4aa5c
0004aa36: 55                 push ebp
0004aa37: 8bec               mov ebp, esp
0004aa39: 8b450c             mov eax, dword ptr [ebp + 0xc]
0004aa3c: 56                 push esi
0004aa3d: 57                 push edi
0004aa3e: 8b7d08             mov edi, dword ptr [ebp + 8]
0004aa41: 83f808             cmp eax, 8
0004aa44: 7235               jb 0x4aa7b
0004aa46: 8d70f8             lea esi, [eax - 8]
0004aa49: 33d2               xor edx, edx
0004aa4b: 85f6               test esi, esi
0004aa4d: 742c               je 0x4aa7b
0004aa4f: 8b0decad0610       mov ecx, dword ptr [0x1006adec]
0004aa55: 8b043a             mov eax, dword ptr [edx + edi]
0004aa58: 03c8               add ecx, eax
0004aa5a: 81f9ba14dab9       cmp ecx, 0xb9da14ba
0004aa60: 7514               jne 0x4aa76
0004aa62: 8b0de0ad0610       mov ecx, dword ptr [0x1006ade0]
0004aa68: 8b443a04           mov eax, dword ptr [edx + edi + 4]
0004aa6c: 03c8               add ecx, eax
0004aa6e: 81f92cdb1b0f       cmp ecx, 0xf1bdb2c
0004aa74: 740b               je 0x4aa81
0004aa76: 42                 inc edx
0004aa77: 3bd6               cmp edx, esi
0004aa79: 72d4               jb 0x4aa4f
0004aa7b: 32c0               xor al, al
0004aa7d: 5f                 pop edi
0004aa7e: 5e                 pop esi
0004aa7f: 5d                 pop ebp
0004aa80: c3                 ret 
0004aa81: b001               mov al, 1
0004aa83: ebf8               jmp 0x4aa7d
0004aa85: 55                 push ebp
0004aa86: 8bec               mov ebp, esp
0004aa88: ff7508             push dword ptr [ebp + 8]
0004aa8b: e8fdfeffff         call 0x4a98d
0004aa90: 5d                 pop ebp
0004aa91: c3                 ret 
0004aa92: 56                 push esi
0004aa93: 8bf1               mov esi, ecx
0004aa95: b967ab0410         mov ecx, 0x1004ab67
0004aa9a: e81bfeffff         call 0x4a8ba
0004aa9f: 84c0               test al, al
0004aaa1: 750e               jne 0x4aab1
0004aaa3: c7                 .byte 0xc7
0004aaa4: 46                 inc esi
0004aaa5: 08                 .byte 0x08