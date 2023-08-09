#define P640 640
#define P1024 1024

void update_state(unsigned char* state, const unsigned char* key, const unsigned int number_of_steps);
void initialize(unsigned char* state, const unsigned char* key, const unsigned char* nonce);
void process_ad(unsigned char* state, const unsigned char* key, const unsigned char* ad, unsigned long long adlen);
void encrypt_text(unsigned char *c, unsigned char* state, const unsigned char* key, const unsigned char* m, unsigned long long mlen);
void decrypt_text(unsigned char *m, unsigned char* state, const unsigned char* key, const unsigned char* c, unsigned long long *mlen);
void finalize_encryption(unsigned char *c, unsigned char* state, const unsigned char* key, unsigned long long mlen, unsigned long long *clen);
int finalize_decryption(unsigned char *m, unsigned char* state, const unsigned char* key, const unsigned char* c, unsigned long long clen, unsigned long long *mlen);

int crypto_aead_encrypt(
	unsigned char *c, unsigned long long *clen,
	const unsigned char *m,unsigned long long mlen,
	const unsigned char *ad,unsigned long long adlen,
	const unsigned char *nsec,
	const unsigned char *npub,
	const unsigned char *k
	);
int crypto_aead_decrypt(
	unsigned char *m,unsigned long long *mlen,
	const unsigned char *c,unsigned long long clen,
	const unsigned char *ad,unsigned long long adlen,
	const unsigned char *nsec,
	const unsigned char *npub,
	const unsigned char *k
	);